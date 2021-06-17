/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 11:44:14 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/09 12:19:10 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include "ex01.h"
#include <stdio.h>
#include <stdlib.h>

void	print_list(t_list **begin_list)
{
	t_list *seek;
	
	seek = *begin_list;
	while (seek != NULL)
	{
		printf("[%s]\n", (char*)seek->data);
		seek = seek->next;
	}
}

void	listify_str_arr(t_list **new_list, char **strings)
{
	void	*temp;
	
	while (*strings != 0)
	{
		temp = *strings;
		ft_list_push_back(new_list, temp);
		strings++;
	}
}

void	free_list(t_list **begin_list)
{
	t_list	*seek;
	t_list	*current;

	current = *begin_list;
	if (current != NULL)
	{
		seek = current->next;
		free(current);
		current = seek;
	}
}

int		main(void)
{
	t_list	**new_list1;
	t_list	**new_list2;
	t_list	**new_list3;
	char	*strings1[] = {"0", "\a\n\v", "", "can", "be", "", "tricky", 0};
	char	*strings2[] = {"sunshine", 0};
	char	*strings3[] = {"the", "great", "leader", "has", "fallen", 0};

	printf("tricky strings:\n");
	new_list1 = malloc(sizeof(t_list**));
	if (new_list1 != NULL)
	{
		listify_str_arr(new_list1, strings1);
		print_list(new_list1);
		free_list(new_list1);
	}
	printf("\nshort list:\n");
	new_list2 = malloc(sizeof(t_list**));
	if (new_list2 != NULL)
	{
		listify_str_arr(new_list2, strings2);
		print_list(new_list2);
		free_list(new_list2);
	}
	printf("\nnormal words:\n");
	new_list3 = malloc(sizeof(t_list));
	if (new_list3 != NULL)
	{
		listify_str_arr(new_list3, strings3);
		print_list(new_list3);
		free_list(new_list3);
	}
	return (0);
}
