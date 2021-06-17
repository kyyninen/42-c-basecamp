/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rpn_eval.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 10:19:48 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/13 13:00:21 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "eval_expr.h"

int		eval_npr_stack(t_stack *input)
{
	t_stack		*stack;
	int			a;
	int			b;
	char		*result;

	stack = t_stack_create(input->capacity);
	while (!t_stack_is_empty(input))
	{
		if (rpn_get_op_value(*t_stack_peek(input)) == 0)
			t_stack_push(stack, t_stack_pop(input));
		else
		{
			a = ft_atoi(t_stack_pop(stack));
			b = ft_atoi(t_stack_pop(stack));
			result = evaluate(b, a, t_stack_pop(input));
			t_stack_push(stack, result);
		}
	}
	if (!t_stack_is_empty(stack))
		return (ft_atoi(t_stack_pop(stack)));
	else
		return (-42);
}

char	*evaluate(int a, int b, char *op)
{
	char	*str;
	int		result;

	str = (char*)malloc(sizeof(char) * 12);
	str = ft_reset_str(str);
	result = 0;
	if (*op == '+')
		result = a + b;
	else if (*op == '-')
		result = a - b;
	else if (*op == '*')
		result = a * b;
	else if (*op == '/')
		result = a / b;
	else if (*op == '%')
		result = a % b;
	return (ft_itoa(result, str));
}
