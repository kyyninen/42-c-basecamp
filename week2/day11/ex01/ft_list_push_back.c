/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 12:31:30 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/09 12:17:41 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

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

t_list		*ft_create_elem(void *data)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	new->next = NULL;
	new->data = data;
	return (new);
}
