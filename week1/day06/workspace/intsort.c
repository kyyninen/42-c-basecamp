/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intsort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 18:36:27 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/02 19:07:03 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	sort(int *int_arr, int size);

int		main(void)
{
	int	test[] = {100, 42, 15, 999999, -10};
	int test_size = 5;
	int index;

	index = 0;
	sort(test, test_size);
	while (index < test_size + 1)
	{
		printf("%d\n", test[index]);
		index++;
	}
	return (0);
}

void	sort(int *int_arr, int size)
{
	int sort_index;
	int loop_index;
	int temp;

	temp = 0;
	sort_index = 0;
	while(sort_index < size)
	{
		loop_index = 1;
		while(loop_index < size)
		{
			if(int_arr[sort_index] > int_arr[loop_index])
			{
				printf("%d seems to be higher than %d\n", int_arr[sort_index], int_arr[loop_index]);
				temp = int_arr[sort_index];
				int_arr[sort_index] = int_arr[loop_index];
				int_arr[loop_index] = temp;
			}
			loop_index++;
		}
		sort_index++;
	}
}