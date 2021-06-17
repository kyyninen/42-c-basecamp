/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 10:28:10 by tpolonen          #+#    #+#             */
/*   Updated: 2021/05/31 10:28:12 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

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

void	ft_putnbr(int nb)
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
