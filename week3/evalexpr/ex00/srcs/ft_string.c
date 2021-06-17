/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 06:54:56 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/13 09:55:31 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "eval_expr.h"

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (*(str + len))
		len++;
	return (len);
}

int		ft_strcat(char *target, char *source)
{
	int		i;
	int		len;

	len = ft_strlen(target);
	i = 0;
	while (*(source + i))
	{
		*(target + len + i) = *(source + i);
		i++;
	}
	*(target + len + i) = '\0';
	return (len + i + 1);
}

char	*ft_reset_str(char *str)
{
	int		i;

	i = 0;
	while (*(str + i) != '\0')
		*(str + i++) = '\0';
	return (str);
}

int		ft_is_whitespace(char ch)
{
	if (ch == ' ' || ch == '\f' || ch == '\n'
	|| ch == '\r' || ch == '\t' || ch == '\v')
		return (1);
	return (0);
}
