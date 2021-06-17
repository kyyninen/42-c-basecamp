/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 15:59:24 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/08 16:17:19 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include "lists.h"
#include "ft_list_last.h"
#include <stdio.h>
#include <stdlib.h>

int		main(void)
{
	t_list	**new_list;
	t_list	*last;
	char	*strings1[] = {"the", "great", "leader", "has", "fallen", 0};
	char	*strings2[] = {"this", "", "0", "can", "be", "\n\a\v", "tricky", 0};
	char	*strings3[] = {"sunshine", 0};
	char	*strings4[] = {0};

	new_list = malloc(sizeof(t_list));
	listify_str_arr(new_list, strings1, &ft_list_push_back);
	last = ft_list_last(*new_list);
	printf("last of the list is [%s]\n", (char*)last->data);
	free_list(new_list);
	new_list = malloc(sizeof(t_list));
	listify_str_arr(new_list, strings2, &ft_list_push_back);
	last = ft_list_last(*new_list);
	printf("last of the list is [%s]\n", (char*)last->data);
	free_list(new_list);
	new_list = malloc(sizeof(t_list));
	listify_str_arr(new_list, strings3, &ft_list_push_back);
	last = ft_list_last(*new_list);
	printf("last of the list is [%s]\n", (char*)last->data);
	free_list(new_list);
	new_list = malloc(sizeof(t_list));
	listify_str_arr(new_list, strings4, &ft_list_push_back);
	last = ft_list_last(*new_list);
	if (last)
	{
		printf("segfault incoming!");
		printf(" %s\n", (char*)last->data);
	}
	else
		printf("segfault averted: last didn't find anything from null.\n");
	return (0);
	
}