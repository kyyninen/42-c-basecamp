/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 05:36:41 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/03 17:56:02 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int		*ft_range(int min, int max);

void	print_int_arr(int *arr, int size)
{
	int index;
	
	index = 0;
	if (arr != NULL)
	{
		while(index < size)
		{
			printf("%d", arr[index]);
			index++;
			if (index < size)
				printf(", ");
		}
	}
	else
		printf("(null pointer)");
	printf("\n");
}

void	test_range(int min, int max)
{
	int test_size;
	int *range;
	
	test_size = max - min;
	printf("ft_range(%d, %d):\n", min, max);
	range = ft_range(min, max);
	print_int_arr(range, test_size);
	free(range);
}

int		main(void)
{	
	test_range(2147483647, -721);
	test_range(1, 1);
	test_range(100, 1);
	test_range(1, 2);
	test_range(1, 3);
	test_range(1, 4);
	test_range(1, 5);
	test_range(-6, 6);
	test_range(-600, -584);
	test_range(7, 42);
	test_range(-500, 42);
	test_range(INT_MIN, INT_MIN + 10);
	test_range(INT_MAX - 10, INT_MAX);
	test_range(INT_MIN, INT_MAX);
}
