/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 21:02:14 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/01 03:58:52 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		char_is_digit(char c);

int		ft_str_is_numeric(char *str)
{
	int		index;

	index = 0;
	while (str[index] != '\0')
	{
		if (char_is_digit(str[index]) == 0)
			return (0);
		index++;
	}
	return (1);
}

int		char_is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
