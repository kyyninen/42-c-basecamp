/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex02.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 17:29:50 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/07 21:38:50 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_map.h"
#include <stdio.h>

int		add_one(int nbr)
{
	return (nbr + 1);
}

void	print_int_arr(int *arr, int length)
{
	int i;

	i = 0;
	while (i < length)
		printf("%d ", *(arr + i++));
	printf("\n");
}

int		main(void)
{
	int		(*func) (int);
	int		arr1[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int		*arr2;

	func = &add_one;
	arr2 = ft_map(arr1, 10, func);
	print_int_arr(arr1, 10);
	printf("add one:\n");
	print_int_arr(arr2, 10);
	return (0);
}
