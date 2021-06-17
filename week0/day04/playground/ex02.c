/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex02.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 13:54:02 by tpolonen          #+#    #+#             */
/*   Updated: 2021/05/29 13:57:57 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_power(int nb, int power);

int		main(void)
{
	printf("Testing with 42^2, should return 1764: %d\n",
	ft_iterative_power(42, 2));
	printf("Testing with 42^0, should return 1   : %d\n",
	ft_iterative_power(42, 0));
	printf("Testing with 42^-10, should return 0 : %d\n",
	ft_iterative_power(42, -10));
	printf("Testing with 42^42, let's see what we get:\n%d\n",
	ft_iterative_power(42, 42));
	return (0);
}
