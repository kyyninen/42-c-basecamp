/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 09:01:36 by tpolonen          #+#    #+#             */
/*   Updated: 2021/05/29 11:38:03 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <time.h>

int		ft_iterative_factorial(int nb);

int		main(void)
{
	clock_t		time_start;
	clock_t		time_stop;
	int			big_result;
	double		time_diff;

	printf("Testing function with 4, should return 24  : %d\n",
	ft_iterative_factorial(4));
	printf("Testing function with 0, should return 1   : %d\n",
	ft_iterative_factorial(0));
	printf("Testing function with -42, should return 0 : %d\n",
	ft_iterative_factorial(-42));
	printf("Testing function with 12, should return 479001600 ");
	printf("in less than 2 secs...\n");
	time_start = clock();
	big_result = ft_iterative_factorial(12);
	time_stop = clock();
	time_diff = difftime(time_stop, time_start);
	printf("***\nDone! Result was %d, took %f ms\n",
	big_result, time_diff);
	printf("Testing function with 42, let's see what happens...\n");
	time_start = clock();
	big_result = ft_iterative_factorial(42);
	time_stop = clock();
	time_diff = difftime(time_stop, time_start);
	printf("***\nDone! Result was %d, took %f ms\n",
	big_result, time_diff);
}
