/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex02.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 16:24:17 by tpolonen          #+#    #+#             */
/*   Updated: 2021/05/29 11:49:04 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int 	main(void)
{
	int		nr1;
	int		nr2;

	nr1 = 42;
	nr2 = 1764;
	printf("nr1=%d, nr2=%d\n***SWAP!***\n", nr1, nr2);
	ft_swap(&nr1, &nr2);
	printf("nr1=%d, nr2=%d\n", nr1, nr2);
	return (0);
}