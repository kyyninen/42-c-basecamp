/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex06.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 18:33:01 by tpolonen          #+#    #+#             */
/*   Updated: 2021/05/30 10:38:02 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <time.h>

int		ft_is_prime(int nb);

void	print_test_line(int nb)
{
	clock_t		time_start;
	clock_t		time_stop;

	time_start = clock();
	printf("Testing %d, result %d ", nb, ft_is_prime(nb));
	time_stop = clock();
	printf("in %ld\n", (time_stop - time_start));
}

int		main(void)
{
	print_test_line(0);
	print_test_line(1);
	print_test_line(3);
	print_test_line(13);
	print_test_line(42);
	print_test_line(123);
	print_test_line(667);
	print_test_line(1009);
	print_test_line(42071);
	print_test_line(142067);
	print_test_line(9142069);
	print_test_line(19142069);
	print_test_line(2147483587);
}
