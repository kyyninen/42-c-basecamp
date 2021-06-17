/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_tests.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 12:20:15 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/02 17:47:04 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int index;
	int result;

	index = 0;
	result = 0;
	printf("comparing %s and %s\n", s1, s2);
	while (s1[index] != '\0' && s2[index] != '\0')
	{
		result = s1[index] - s2[index];
		if (result != 0)
			return (result);
		index++;
	}
	return (s1[index] - s2[index]);
}

void	ft_swap(char **a, char **b)
{
	char	**buf;

	buf = a;
	a = b;
	b = buf;
}

void	selection_sort(char *str_arr[], long size)
{
	char	*sorted[size];
	int		index;
	int		lowest_index;
	int		sorted_count;

	sorted_count = 0;
	if (size > 2)
	{
		while (sorted_count < size - 1)
		{
			index = 0;
			lowest_index = 0;
			while (index < size - 1)
			{
				if (ft_strcmp(str_arr[index], str_arr[lowest_index]) < 0)
					lowest_index = index;
				index++;
			}
			if (str_arr[lowest_index][0] < 127)
			{
				sorted[sorted_count] = str_arr[lowest_index];
				str_arr[lowest_index][0] = 127;
				sorted_count++;
			}
		}
		index = 0;
		while (index < size - 1)
			str_arr[index] = sorted[index];
	}
}



void	bubble_sort(char *str_arr[], long size)
{
	int		swapped;
	int 	index;
	
	swapped = 1;
	while (swapped != 0)
	{
		swapped = 0;
		index = 0;
		while (index < size - 2)
		{
			if (ft_strcmp(str_arr[index], str_arr[index + 1] ) > 0)
			{
				printf("swapping %s and %s\n", str_arr[index], str_arr[index + 1]);
				ft_swap(&str_arr[index], &str_arr[index + 1]);
				swapped = 1;
				index++;
			}
			index++;
		}
	}
}

int		main(int argc, char *argv[])
{
	int		index;

	printf("pre-sort\n");
	bubble_sort(argv + 1, argc);
	printf("after-sort\n");
	index = 1;
	while (index < argc)
	{
		ft_putstr(argv[index]);
		ft_putchar('\n');
		index++;
	}
}
