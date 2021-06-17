/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 21:02:14 by tpolonen          #+#    #+#             */
/*   Updated: 2021/05/31 21:34:01 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		char_is_alpha(char c);

int		ft_str_is_alpha(char *str)
{
	int		index;

	index = 0;
	while (str[index] != '\0')
	{
		if (char_is_alpha(str[index]) == 0)
			return (0);
		index++;
	}
	return (1);
}

int		char_is_alpha(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (2);
	else if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
