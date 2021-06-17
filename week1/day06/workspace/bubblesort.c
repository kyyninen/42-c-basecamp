/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubblesort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 19:08:35 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/02 19:54:23 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	int_bubblesort(int arr[], int size)
{
	int		step;
	int		index;
	int		temp;

	step = 0;
	while(step < size - 1)
	{
		index = 0;
		while (index < size - step - 1)
		{
			if(arr[index] > arr[index + 1])
			{
				temp = arr[index];
				arr[index] = arr[index + 1];
				arr[index + 1] = temp;
			}
			index++;
		}
		step++;
	}
}

void	str_bubblesort(char *str_arr[], int size)
{
	int		step;
	int		index;
	char	*temp;

	step = 0;
	while(step < size - 1)
	{
		index = 0;
		while (index < size - step - 1)
		{
			if(strcmp(str_arr[index], str_arr[index + 1]) > 0)
			{
				temp = str_arr[index];
				str_arr[index] = str_arr[index + 1];
				str_arr[index + 1] = temp;
			}
			index++;
		}
		step++;
	}
}

int		main(int argc, char *argv[])
{
	int		array[] = {100, 42, 15, 999999, -10, 456, 1, -666, 798};
	int		size = sizeof(array) / sizeof(array[0]);
	int		index = 0;

	int_bubblesort(array, size);
	while (index < size)
	{
		printf("%d\n", array[index]);
		index++;
	}
	str_bubblesort(argv + 1, argc - 1);
	index = 1;
	while (index < argc)
	{
		printf("%s\n", argv[index]);
		index++;
	}
	return (0);
}
