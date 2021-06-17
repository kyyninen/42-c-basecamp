/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 17:21:46 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/09 08:35:07 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int *arr;
	int i;

	arr = (int *)malloc(length * sizeof(int));
	i = 0;
	while (i < length)
	{
		*(arr + i) = f(*(tab + i));
		i++;
	}
	return (arr);
}
