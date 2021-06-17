/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex05.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 19:20:53 by tpolonen          #+#    #+#             */
/*   Updated: 2021/05/29 11:51:08 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putstr(char *str);

int		main(void)
{
	char test[] = "This is the string to print.\n";

	printf("printf:\n%s\n", test);
	printf("ft_putstr:\n");
	ft_putstr(test);
	return (0);
}
