/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 21:02:14 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/01 16:57:04 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_alphanumeric(char c);

char	*ft_strcapitalize(char *str)
{
	int		index;
	int		new_word;

	index = 0;
	new_word = 1;
	while (str[index] != '\0')
	{
		if (is_alphanumeric(str[index]) != 0 && new_word == 1)
		{
			new_word = 0;
			if (is_alphanumeric(str[index]) == 1)
				str[index] -= 32;
		}
		else if (is_alphanumeric(str[index]) == 2)
			str[index] += 32;
		else if (is_alphanumeric(str[index]) == 0 && new_word == 0)
			new_word = 1;
		index++;
	}
	return (str);
}

int		is_alphanumeric(char c)
{
	if (c >= '0' && c <= '9')
		return (3);
	else if (c >= 'A' && c <= 'Z')
		return (2);
	else if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
