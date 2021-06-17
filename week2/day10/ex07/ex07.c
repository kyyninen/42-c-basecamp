/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex07.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 19:18:18 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/08 19:29:33 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex07.h"
#include <stdio.h>

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
	ft_sort_wordtab(tab);
	print_str_arr(tab);
	return (0);
}