/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 13:32:09 by tpolonen          #+#    #+#             */
/*   Updated: 2021/05/27 07:18:19 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_reverse_alphabet(void)
{
	char c_to_print;

	ft_putchar('z');
	ft_putchar('y');
	ft_putchar('x');
	ft_putchar('w');
	ft_putchar('v');
	ft_putchar('u');
	ft_putchar('t');
	ft_putchar('s');
	ft_putchar('r');
	ft_putchar('q');
	ft_putchar('p');
	ft_putchar('o');
	ft_putchar('n');
	ft_putchar('m');
	ft_putchar('l');
	c_to_print = 'k';
	ft_putchar(c_to_print);
	while (c_to_print != 'a')
	{
		c_to_print--;
		ft_putchar(c_to_print);
	}
}
