/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 06:41:38 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/13 18:14:32 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "eval_expr.h"

t_stack	*convert_to_rpn_stack(char *str)
{
	t_stack	*output;
	t_stack	*stack;

	output = t_stack_create(100);
	stack = t_stack_create(100);
	while (*str)
	{
		if (*str == '(')
			t_stack_push(stack, "(");
		else if (*str == ')')
			rpn_close_brackets(output, stack);
		else if (rpn_get_op_value(*str) > 0)
			rpn_add_operator(output, stack, str);
		else
			str = rpn_cut_token(output, str);
		str++;
	}
	output = rpn_empty_stack(output, stack);
	free(stack);
	return (output);
}

t_stack	*t_stack_reverse(t_stack *stack)
{
	t_stack	*reversed;

	reversed = t_stack_create(stack->capacity);
	while (!t_stack_is_empty(stack))
		t_stack_push(reversed, t_stack_pop(stack));
	free(stack);
	return (reversed);
}

int		eval_expr(char *str)
{
	t_stack		*rpn_stack;
	int			result;

	rpn_stack = convert_to_rpn_stack(str);
	result = eval_npr_stack(t_stack_reverse(rpn_stack));
	free(rpn_stack);
	return (result);
}

int		main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_putnbr(eval_expr(av[1]));
		ft_putchar('\n');
	}
	return (0);
}
