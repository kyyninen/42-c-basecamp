/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 07:22:20 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/03 16:34:11 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int				*temp;
	unsigned int	arr_size;
	unsigned int	index;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	arr_size = max - min;
	temp = malloc(arr_size * 4);
	if (temp == NULL)
		return (0);
	index = 0;
	while (index < arr_size)
	{
		temp[index] = min + index;
		index++;
	}
	*range = temp;
	return (index);
}
