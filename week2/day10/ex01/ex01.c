/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 16:35:27 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/09 13:48:09 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_foreach.h"
#include <stdio.h>

void	print_int(int nbr)
{
	printf("[%d]\n", nbr);
}

int		main(void)
{
	void	(*func) (int);
	int		arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	func = &print_int;
	ft_foreach(arr, 10, &print_int);
	return (0);
}