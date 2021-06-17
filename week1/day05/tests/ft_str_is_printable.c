/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 04:40:45 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/01 04:41:40 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		char_is_printable(char c);

int		ft_str_is_printable(char *str)
{
	int		index;

	index = 0;
	while (str[index] != '\0')
	{
		if (char_is_printable(str[index]) == 0)
			return (0);
		index++;
	}
	return (1);
}

int		char_is_printable(char c)
{
	if (c >= ' ' && c <= 127)
		return (1);
	else
		return (0);
}
