/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 21:05:35 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/10 09:20:14 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list **begin_list)
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
