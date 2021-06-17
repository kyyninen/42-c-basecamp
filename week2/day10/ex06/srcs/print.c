/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 06:10:46 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/08 07:59:30 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

void	ft_putnbr(int nbr)
{
	long	out;

	out = nbr;
	if (out < 0)
	{
		ft_putchar('-');
		out *= -1;
	}
	if (out > 9)
		ft_putnbr(out / 10);
	ft_putchar((out % 10) + 48);
}
