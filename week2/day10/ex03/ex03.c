/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex03.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 20:32:19 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/08 09:41:10 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_any.h"
#include <stdio.h>

int		str_contains_a(char *str)
{
	while (*str)
	{
		if (*str == 'a' || *str == 'A')
			return (1);
		str++;
	}
	return (0);
}

int		str_contains_b(char *str)
{
	while (*str)
	{
		if (*str == 'b' || *str == 'B')
			return (1);
		str++;
	}
	return (0);
}

int		main(void)
{
	int		(*contains_a)(char *);
	int		(*contains_b)(char *);
	char	*strings[] = {"apple", "moon", "crunch", "kite", "loco", 0};
	char	*bad_strings1[] = { };
	char	*bad_strings2[] = {0};
	
	contains_a = &str_contains_a;
	contains_b = &str_contains_b;

	printf("Should return 1: %d\n", ft_any(strings, contains_a));
	printf("Should return 0: %d\n", ft_any(strings, contains_b));
	printf("what happens here: %d\n", ft_any(bad_strings1, contains_a));
	printf("what happens here: %d\n", ft_any(bad_strings2, contains_b));
	return (0);
}