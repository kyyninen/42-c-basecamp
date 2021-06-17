/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rpn_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 07:27:47 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/13 12:36:11 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "rpn.h"

int		rpn_get_op_value(char op)
{
	if (op == '/' || op == '*' || op == '%')
		return (3);
	if (op == '+' || op == '-')
		return (2);
	if (op == '(' || op == ')')
		return (1);
	return (0);
}

void	rpn_close_brackets(char *output, t_stack *stack)
{
	while (*t_stack_peek(stack) != '(')
	{
		printf("moving %s to output b/c closing brackets\n", t_stack_peek(stack));
		ft_strcat(output, t_stack_pop(stack));
		ft_strcat(output, " ");
		if (t_stack_is_empty(stack))
		{
			ft_putstr("Error: uneven brackets!!!\n");
			break ;
		}
	}
	t_stack_pop(stack);
}

void	rpn_add_operator(char *output, t_stack *stack, char *str)
{
	char *op;

	op = (char*)malloc(sizeof(char));
	*op = *str;
	printf("is op: %c less valuable than... ", *op);
	if (t_stack_is_empty(stack))
		printf("oh! i guess it was first\n");
	while (!t_stack_is_empty(stack))
	{
		printf("%c? ", *(t_stack_peek(stack)));
		printf(": %d <= %d == ", rpn_get_op_value(*op),
		rpn_get_op_value(*(t_stack_peek(stack))));
		if (rpn_get_op_value(*op) <= rpn_get_op_value(*(t_stack_peek(stack))))
		{
			printf("yes, put %s to output\n", t_stack_peek(stack));
			ft_strcat(output, t_stack_pop(stack));
			ft_strcat(output, " ");
		}
		else
		{
			printf("no! done, add %s to stack\n", op);
			break ;
		}
			
	}
	t_stack_push(stack, op);
}

char	*rpn_cut_token(char *output, char *str)
{
	int token_len;
	int token_index;
	char *token;
	
	token_len = 0;
	token_index = 0;
	while (*(str + token_len) && !ft_is_whitespace(*(str + token_len)) &&
	*(str + token_len) != ')')
		token_len++;
	if (token_len != 0)
	{
		token = (char*)malloc(sizeof(char) * (token_len + 1));
		while (token_index < token_len)
			*(token + token_index++) = *str++;
		*(token + token_index) = '\0';
		ft_strcat(output, token);
		ft_strcat(output, " ");
	}
	while (ft_is_whitespace(*str))
		str++;
	return (str);
}

char	*rpn_empty_stack(char *output, t_stack *stack)
{
	ft_putstr("output before emptying stack:\n");
	ft_putstr(output);
	ft_putstr("\n");
	while (!t_stack_is_empty(stack))
	{
		ft_putstr("next element to be added from stack:\n");
		ft_putstr(t_stack_peek(stack));
		ft_putstr("\n");
		ft_strcat(output, t_stack_pop(stack));
		ft_strcat(output, " ");
	}
	ft_putstr("output after emptying stack:\n");
	ft_putstr(output);
	ft_putstr("\n");
	return (output);
}