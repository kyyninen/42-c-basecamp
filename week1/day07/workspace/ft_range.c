/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 05:28:36 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/03 17:50:08 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int				*range;
	unsigned int	arr_size;
	unsigned int	index;

	if (min >= max)
		return (NULL);
	arr_size = max - min;
	range = malloc(arr_size * 4);
	if (range == NULL)
		return (0);
	index = 0;
	while (index < arr_size)
	{
		range[index] = min + index;
		index++;
	}
	return (range);
}
