/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 14:18:22 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/08 21:00:03 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	t_list	*seek;
	int		size;

	if (!begin_list)
		return (0);
	seek = begin_list->next;
	size = 1;
	while (seek != 0)
	{
		size++;
		seek = seek->next;
	}
	return (size);
}
