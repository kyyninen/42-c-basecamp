/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 13:32:09 by tpolonen          #+#    #+#             */
/*   Updated: 2021/05/27 19:39:18 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char c_to_print;

	ft_putchar('a');
	ft_putchar('b');
	ft_putchar('c');
	ft_putchar('d');
	ft_putchar('e');
	ft_putchar('f');
	ft_putchar('g');
	ft_putchar('h');
	ft_putchar('i');
	ft_putchar('j');
	ft_putchar('k');
	ft_putchar('l');
	ft_putchar('m');
	ft_putchar('n');
	ft_putchar('o');
	ft_putchar('p');
	c_to_print = 'q';
	while (c_to_print <= 'z')
	{
		ft_putchar(c_to_print);
		c_to_print++;
	}
}
