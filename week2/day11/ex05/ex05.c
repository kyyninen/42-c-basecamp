/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex05.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 20:19:17 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/08 20:43:02 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include "ex05.h"
#include <stdlib.h>
#include <stdio.h>

void	print_str_list(t_list **begin_list)
{
	t_list *seek;
	
	seek = *begin_list;
	while (seek != NULL)
	{
		printf("[%s]\n", (char*)seek->data);
		seek = seek->next;
	}
}

void	print_str_arr(char **str_arr)
{
	while (*str_arr)
	{
		printf("[%s]\n", *str_arr);
		str_arr++;
	}
}

int		main(int ac, char **av)
{
	t_list *new_list;
	
	printf("ac: %d\nav:\n", ac);
	print_str_arr(av);
	printf("listed av:\n");
	new_list = ft_list_push_params(ac, av);
	print_str_list(&new_list);
	return (0);
}