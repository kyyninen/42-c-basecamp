/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 05:56:49 by tpolonen          #+#    #+#             */
/*   Updated: 2021/05/31 07:34:45 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putstr(char *str);

int		main(void)
{
	char test[] = "The ships hung in the sky in much the same way that bricks don’t.";

	printf("printf:\n%s\n", test);
	printf("ft_putstr:\n");
	ft_putstr(test);
	printf("\n");
	return (0);
}
