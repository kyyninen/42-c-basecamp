/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex03.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 17:38:36 by tpolonen          #+#    #+#             */
/*   Updated: 2021/05/28 17:44:01 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int		main(void)
{
	int		div;
	int		mod;

	ft_div_mod(42, 7, &div, &mod);
	printf("42 / 7 = %d, 42 %% 7 = %d\n", div, mod);
	ft_div_mod(42, 5, &div, &mod);
	printf("42 / 5 = %d, 42 %% 5 = %d\n", div, mod);
}
