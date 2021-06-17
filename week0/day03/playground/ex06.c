/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex06.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 19:45:25 by tpolonen          #+#    #+#             */
/*   Updated: 2021/05/28 20:05:45 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strlen(char *str);

int		main(void)
{
	char test[] = "The ships hung in the sky in much the same way that bricks don’t.";

	printf("Input: %s\n", test);
	printf("strlen: %lu\n", strlen(test));
	printf("ft_strlen: %d\n", ft_strlen(test));
	return (0);
}
