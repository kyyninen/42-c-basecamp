/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 16:22:22 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/09 16:49:39 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int fd, char c)
{
	write(fd, &c, 1);
}

void	ft_putstr(int fd, char *str)
{
	while (*str)
		ft_putchar(fd, *(str++));
}

void	ft_putnbr(int fd, int nb)
{
	long	x;

	x = nb;
	if (x < 0)
	{
		ft_putchar(fd, '-');
		x = -x;
	}
	if (x > 9)
		ft_putnbr(fd, x / 10);
	ft_putchar(fd, (x % 10) + 48);
}
