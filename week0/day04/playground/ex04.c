/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 14:32:25 by tpolonen          #+#    #+#             */
/*   Updated: 2021/05/29 14:45:14 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_fibonacci(int index);

int		main(void)
{
	printf("Testing fibonacci sequence...\n%d, %d, %d, %d ...\n",
	ft_fibonacci(0), ft_fibonacci(1), ft_fibonacci(2), ft_fibonacci(3));
	printf("Up to the 42nd element: %d\n", ft_fibonacci(42));
	printf("Down to the -42nd element: %d\n", ft_fibonacci(-42));
	return (0);
}
