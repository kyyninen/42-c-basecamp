/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rpn_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 07:27:47 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/13 12:37:17 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "eval_expr.h"

int			rpn_get_op_value(char op)
{
	if (op == '/' || op == '*' || op == '%')
		return (3);
	if (op == '+' || op == '-')
		return (2);
	if (op == '(' || op == ')')
		return (1);
	return (0);
}

void		rpn_close_brackets(t_stack *output, t_stack *stack)
{
	while (*t_stack_peek(stack) != '(')
	{
		t_stack_push(output, t_stack_pop(stack));
		if (t_stack_is_empty(stack))
		{
			ft_putstr("Error: uneven brackets!!!\n");
			break ;
		}
	}
	t_stack_pop(stack);
}

void		rpn_add_operator(t_stack *output, t_stack *stack, char *str)
{
	char	*op;

	op = (char*)malloc(sizeof(char));
	*op = *str;
	while (!t_stack_is_empty(stack))
	{
		if (rpn_get_op_value(*op) <= rpn_get_op_value(*(t_stack_peek(stack))))
		{
			t_stack_push(output, t_stack_pop(stack));
		}
		else
			break ;
	}
	t_stack_push(stack, op);
}

char		*rpn_cut_token(t_stack *output, char *str)
{
	int		token_len;
	int		token_index;
	char	*token;

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
		t_stack_push(output, token);
	}
	while (ft_is_whitespace(*str))
		str++;
	return (--str);
}

t_stack		*rpn_empty_stack(t_stack *output, t_stack *stack)
{
	while (!t_stack_is_empty(stack))
		t_stack_push(output, t_stack_pop(stack));
	return (output);
}
