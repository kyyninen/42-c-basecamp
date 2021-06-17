/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 05:30:59 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/08 17:23:40 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int		main(int argc, char **argv)
{
	if (argc != 4)
		return (0);
	do_op(ft_atoi(argv[1]), ft_atoi(argv[3]), g_get_op(argv[2]));
	return (0);
}

int		(*g_get_op(char *arg))(int, int)
{
	int (*ops[5]) (int a, int b);

	ops[0] = &ft_add;
	ops[1] = &ft_sub;
	ops[2] = &ft_mul;
	ops[3] = &ft_div;
	ops[4] = &ft_mod;
	if (*arg == '+')
		return (ops[0]);
	if (*arg == '-')
		return (ops[1]);
	if (*arg == '*')
		return (ops[2]);
	if (*arg == '/')
		return (ops[3]);
	if (*arg == '%')
		return (ops[4]);
	return (0);
}

void	do_op(int a, int b, int (*op)(int, int))
{
	if (op == &ft_div && b == 0)
		ft_putstr("Stop : division by zero");
	else if (op == &ft_mod && b == 0)
		ft_putstr("Stop : modulo by zero");
	else if (op == 0)
		ft_putstr("0");
	else
		ft_putnbr(op(a, b));
	ft_putchar('\n');
}
