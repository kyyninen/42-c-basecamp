/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 04:10:25 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/01 04:10:42 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		char_is_uppercase(char c);

int		ft_str_is_uppercase(char *str)
{
	int		index;

	index = 0;
	while (str[index] != '\0')
	{
		if (char_is_uppercase(str[index]) == 0)
			return (0);
		index++;
	}
	return (1);
}

int		char_is_uppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
