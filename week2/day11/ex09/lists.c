/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lists.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 13:50:22 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/09 20:18:14 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#define INT2VOIDP(i) (void*)(uintptr_t)(i)

t_list		*ft_create_elem(void *data)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	new->next = NULL;
	new->data = data;
	return (new);
}

void		ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*new;
	t_list	*seek;

	new = ft_create_elem(data);
	seek = *begin_list;
	if (seek == NULL)
		*begin_list = new;
	else
	{
		while (seek->next != NULL)
			seek = seek->next;
		seek->next = new;
	}
}

void		ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*new;
	t_list	*previous_first;

	new = ft_create_elem(data);
	previous_first = *begin_list;
	*begin_list = new;
	if (previous_first != NULL)
		new->next = previous_first;
}

void		print_str_list(t_list **begin_list)
{
	t_list *seek;
	
	seek = *begin_list;
	while (seek != NULL)
	{
		printf("[%s]\n", (char*)seek->data);
		seek = seek->next;
	}
}

void		listify_str_arr(t_list **new_list, char **strings,
			void (*extend_func)(t_list**, void*))
{
	void	*temp;
	
	while (*strings != 0)
	{
		temp = *strings;
		extend_func(new_list, temp);
		strings++;
	}
}

void		listify_int_arr(t_list **new_list, int *ints, int size,
			void (*extend_func)(t_list**, void*))
{
	int		i;
	void	*temp;

	i = 0;
	while (i < size)
	{
		temp = INT2VOIDP(*(ints + i));
		extend_func(new_list, temp);
		i++;
	}
}

void		ft_list_clear(t_list **begin_list)
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
	free(begin_list);
	*begin_list = NULL;
}
