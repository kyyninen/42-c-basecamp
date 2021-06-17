/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 15:57:56 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/10 09:22:01 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list	*seek;

	seek = begin_list;
	if (!seek)
		return (0);
	while (seek != 0 && nbr > 0)
	{
		seek = seek->next;
		nbr--;
	}
	if (nbr > 0)
		return (0);
	return (seek);
}
