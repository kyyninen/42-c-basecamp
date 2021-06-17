/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex07.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 15:59:24 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/09 19:05:07 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include "lists.h"
#include "ft_list_at.h"
#include <stdio.h>
#include <stdlib.h>

int		main(void)
{
	t_list	**new_list;
	t_list	*find;
	char	*strings1[] = {"the", "great", "leader", "has", "fallen", 0};
	char	*strings2[] = {"this", "\\\\\\", "0", "can", "be", "", "tricky", 0};
	char	*strings3[] = {"sunshine", 0};

	new_list = malloc(sizeof(t_list));
	listify_str_arr(new_list, strings1, &ft_list_push_back);
	find = ft_list_at(*new_list, 0);
	printf("0th of the list is [%s]\n", (char*)find->data);
	ft_list_clear(new_list);
	new_list = malloc(sizeof(t_list));
	listify_str_arr(new_list, strings2, &ft_list_push_back);
	find = ft_list_at(*new_list, 6);
	printf("6th of the list is [%s]\n", (char*)find->data);
	ft_list_clear(new_list);
	new_list = malloc(sizeof(t_list));
	listify_str_arr(new_list, strings3, &ft_list_push_back);
	find = ft_list_at(*new_list, 3);
	if (find != NULL)
	{
		printf("segfault incoming!\n");
		printf("3rd of the list is [%s]\n", (char*)find->data);
		ft_list_clear(new_list);
	}
	else
		printf("segfault averted: didn't find anything after list ended\n");
	return (0);	
}