/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex09.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 19:22:36 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/10 09:34:09 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include "lists.h"
#include "ft_list_foreach.h"
#include <stdio.h>
#include <stdlib.h>

void	print_int(void *nbr)
{
	printf("[%d]\n", (int)nbr);
}

int		main(void)
{
	int		nbrs[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	t_list	**new_list;

	new_list = malloc(sizeof(t_list));
	listify_int_arr(new_list, nbrs, 10, &ft_list_push_back);
	ft_list_foreach(*new_list, &print_int);
	return (0);
}
