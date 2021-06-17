/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 05:33:01 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/13 07:39:44 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rpn.h"

int		ft_atoi(char *str)
{
	int result;
	int sign;

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

char	*ft_skip_whitespace(char *str)
{
	while ((*str == ' ' || *str == '\f' || *str == '\n'
	|| *str == '\r' || *str == '\t' || *str == '\v') && *str)
		str++;
	return (str);
}
