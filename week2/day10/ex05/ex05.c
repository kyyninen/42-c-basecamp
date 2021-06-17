/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex05.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 21:20:07 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/08 08:24:31 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_is_sort.h"
#include <stdio.h>

int		compare(int i1, int i2)
{
	return (i1 - i2);
}

int		main(void)
{
	int		(*comp)(int, int);
	int		arr_in_order[] = {0, 1, 2, 3, 4, 5};
	int		arr_disarray[] = {42, 6, 7, -5000, 2, 3};
	int		mouli_test1[] = {242446, 46912};

	comp = &compare;
	printf("Should return 1 -> %d\n", ft_is_sort(arr_in_order, 6, comp));
	printf("Should return 0 -> %d\n", ft_is_sort(arr_disarray, 6, comp));
	printf("Should return... 1? I guess? -> %d\n", ft_is_sort(mouli_test1, 2, comp));
	return (0);
}