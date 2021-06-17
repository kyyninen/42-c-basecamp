/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex08.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 19:18:18 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/08 19:44:42 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex08.h"
#include <stdio.h>

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		s1++;
		s2++;
		if (*s1 == '\0')
			return (*s1 - *s2);
	}
	return (*s1 - *s2);
}

void	print_str_arr(char **str_arr)
{
	while (*str_arr)
	{
		printf("[%s]\n", *str_arr);
		str_arr++;
	}
	printf("\n");
}

int		main(void)
{
	char *str = "The ships hung in the sky in much the same way that bricks don\'t.";
	char **tab;
	
	tab = ft_split_whitespaces(str);
	printf("tab before sort:\n");
	print_str_arr(tab);
	printf("tab after sort:\n");
	ft_advanced_sort_wordtab(tab, &ft_strcmp);
	print_str_arr(tab);
	return (0);
}