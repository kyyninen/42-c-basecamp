/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex06.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 19:44:03 by tpolonen          #+#    #+#             */
/*   Updated: 2021/05/27 20:25:18 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nb);
int		ft_putchar(char ch);

int		main(void)
{
	ft_putnbr(4);
	ft_putchar('/n');
	ft_putnbr(20);
	ft_putchar('/n');
	ft_putnbr(690);
	ft_putchar('/n');
	ft_putnbr(-12345);
	ft_putchar('/n');
	ft_putnbr(32101);
	ft_putchar('/n');
	ft_putnbr(-2147483647);
	ft_putchar('/n');
	ft_putnbr(2147483647);
	ft_putchar('/n');
	return (0);
}
