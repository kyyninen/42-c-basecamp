/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 08:54:51 by tpolonen          #+#    #+#             */
/*   Updated: 2021/05/31 10:24:29 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}

int		int_to_str(int nb, char *str)
{
	int		negative;
	int		index;

	if (nb < 0)
	{
		negative = 1;
		nb *= -1;
	}
	else
		negative = 0;
	index = 0;
	while (nb > 0)
	{
		str[index] = (nb % 10) + 48;
		nb /= 10;
		index++;
	}
	if (negative == 1)
	{
		str[index] = '-';
		index++;
	}
	str[index] = '\0';
	return (index);
}

void	ft_strrev(char *str, int size)
{
	char	result[size];
	int		index;

	index = 0;
	while (size > 0)
	{
		result[index] = str[size - 1];
		size--;
		index++;
	}
	result[index] = '\0';
	while (result[size] != '\0')
	{
		str[size] = result[size];
		size++;
	}
}

void	ft_putnb(int nb)
{
	char	int_as_str[12];
	int		str_size;

	int_as_str[0] = '\0';
	if (nb == -2147483648)
		ft_putstr("-2147483648");
	else if (nb == 0)
		ft_putstr("0");
	else
	{
		str_size = int_to_str(nb, int_as_str);
		ft_strrev(int_as_str, str_size);
		ft_putstr(int_as_str);
	}
}

int		main(void)
{
	printf("\nTesting with 42:\n");
	ft_putnb(42);
	printf("\nTesting with -42:\n");
	ft_putnb(-42);
	printf("\nTesting with 1:\n");
	ft_putnb(1);
	printf("\nTesting with 2147483647:\n");
	ft_putnb(2147483647);
	printf("\nTesting with -2147483648:\n");
	ft_putnb(-2147483648);
	printf("\nTesting with 42:\n");
	ft_putnb(42);
	printf("\nTesting with -42:\n");
	ft_putnb(-42);
	printf("\nTesting with 0:\n");
	ft_putnb(0);
	printf("\nTesting with 2147483647:\n");
	ft_putnb(2147483647);
	printf("\nTesting with -2147483648:\n");
	ft_putnb(-2147483648);
	printf("\nTesting with 1546546778:\n");
	ft_putnb(1546546778);
	printf("\nTesting with 346346435:\n");
	ft_putnb(346346435);
	printf("\nTesting with 85873445:\n");
	ft_putnb(85873445);
	printf("\nTesting with 1978354:\n");
	ft_putnb(1978354);
	printf("\nTesting with 929532:\n");
	ft_putnb(929532);
	printf("\nTesting with 38523:\n");
	ft_putnb(38523);
	printf("\nTesting with 5675:\n");
	ft_putnb(5675);
	printf("\nTesting with 123:\n");
	ft_putnb(123);
	printf("\n");
	return (0);
}
