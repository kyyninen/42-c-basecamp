/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 17:38:36 by tpolonen          #+#    #+#             */
/*   Updated: 2021/05/29 11:49:36 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int		main(void)
{
	int		nr1;
	int		nr2;

	nr1 = 42;
	nr2 = 7;
	ft_ultimate_div_mod(&nr1, &nr2);
	printf("42 / 7 = %d, 42 %% 7 = %d\n", nr1, nr2);
	nr1 = 42;
	nr2 = 5;
	ft_ultimate_div_mod(&nr1, &nr2);
	printf("42 / 5 = %d, 42 %% 5 = %d\n", nr1, nr2);
}
