/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 15:42:36 by tpolonen          #+#    #+#             */
/*   Updated: 2021/05/31 19:51:50 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int index;
	int sub_index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] == to_find[0])
		{
			sub_index = 1;
			while (str[index + sub_index] == to_find[sub_index])
				sub_index++;
			if (to_find[sub_index] == '\0')
				return (str + index);
		}
		index++;
	}
	return (0);
}
