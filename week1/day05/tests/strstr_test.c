/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 16:00:29 by tpolonen          #+#    #+#             */
/*   Updated: 2021/05/31 19:51:02 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2)
{
	int index;
	int result;

	printf("Comparing these two strings:\n%s\n%s\n", s1, s2);

	index = 0;
	result = 0;
	while (s1[index] != '\0' && s2[index] != '\0')
	{
		result = s1[index] - s2[index];
		if (result != 0)
			return (result);
		index++;
	}
	return (s1[index] - s2[index]);
}

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

int		main(void)
{
	char	haystack[] = "The ships hung in the sky in much the same way that bricks don\'t.";
	char	needle[] = "bricks";
	
	printf("Haystack: %s\nNeedle: %s\n\n", haystack, needle);
	printf("strstr:\n%s\n\n", strstr(haystack, needle));
	printf("ft_strstr:\n%s\n\n", ft_strstr(haystack, needle));
}
