/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rpn.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 06:41:38 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/13 12:20:23 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "rpn.h"

char*	reverse_polish(char *str)
{
	char		*output;
	t_stack		*stack;

	output = (char*)malloc(sizeof(char) * 1000);
	output = ft_reset_str(output);
	stack = t_stack_create(100);
	while (*str)
	{
		if (*str == '(')
		{
			t_stack_push(stack, "(");
			str++;
		}
		else if (*str == ')')
		{
			rpn_close_brackets(output, stack);
			str++;
		}
		else if (rpn_get_op_value(*str) > 0)
		{
			rpn_add_operator(output, stack, str);
			str++;	
		}
		else
			str = rpn_cut_token(output, str);
	}
	output = rpn_empty_stack(output, stack);
	return (output);
}

int		main(int ac, char **av)
{
	char* test1;
	
	if (ac > 1)
		test1 = reverse_polish(av[1]);
	return (0);
}
