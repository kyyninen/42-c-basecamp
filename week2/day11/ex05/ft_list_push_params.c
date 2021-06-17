/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 20:01:38 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/09 12:29:09 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list		*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*head;
	t_list	*new;
	t_list	*previous_first;

	if (ac < 2)
		return (NULL);
	av++;
	head = ft_create_elem(*av);
	if (ac > 2)
	{
		av++;
		i = 2;
		while (i < ac)
		{
			new = ft_create_elem(*av);
			previous_first = head;
			head = new;
			new->next = previous_first;
			av++;
			i++;
		}
	}
	return (head);
}

t_list		*ft_create_elem(void *data)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	new->next = NULL;
	new->data = data;
	return (new);
}
