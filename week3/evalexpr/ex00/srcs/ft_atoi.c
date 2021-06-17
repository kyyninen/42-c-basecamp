/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 05:33:01 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/13 12:02:33 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "eval_expr.h"

int		ft_atoi(char *str)
{
	int		result;
	int		sign;

	str = ft_skip_whitespace(str);
	result = 0;
	sign = 1;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while (*str)
	{
		if (*str < '0' || *str > '9')
			break ;
		result = result * 10 + (*str - '0');
		str++;
	}
	if (result > 0 && sign < 0 && result != -2147483648)
		result *= sign;
	return (result);
}

char	*ft_itoa(int nb, char *str)
{
	int		i;
	int		sign;

	i = 0;
	sign = 1;
	if (nb == 0)
		*(str + i++) = '0';
	else if (nb < 0)
	{
		sign = -1;
		nb = -nb;
	}
	while (nb != 0)
	{
		*(str + i++) = ((nb % 10) > 9) ?
		((nb % 10) - 10) + 'a' : (nb % 10) + '0';
		nb /= 10;
	}
	if (sign == -1)
		*(str + i++) = '-';
	*(str + i) = '\0';
	ft_strrev(str, i);
	return (str);
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

char	*ft_skip_whitespace(char *str)
{
	while ((*str == ' ' || *str == '\f' || *str == '\n'
	|| *str == '\r' || *str == '\t' || *str == '\v') && *str)
		str++;
	return (str);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
