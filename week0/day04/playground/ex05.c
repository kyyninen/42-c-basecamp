/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex05.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 15:04:34 by tpolonen          #+#    #+#             */
/*   Updated: 2021/05/29 18:42:10 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_sqrt(int nb);

int		main(void)
{
	printf("      Test | Result\n");
	printf("         0 | %d\n", ft_sqrt(0));
	printf("         1 | %d\n", ft_sqrt(1));
	printf("         2 | %d\n", ft_sqrt(2));
	printf("         9 | %d\n", ft_sqrt(9));
	printf("        15 | %d\n", ft_sqrt(15));
	printf("        42 | %d\n", ft_sqrt(42));
	printf("       100 | %d\n", ft_sqrt(100));
	printf("       666 | %d\n", ft_sqrt(666));
	printf("      1024 | %d\n", ft_sqrt(1024));
	printf("      1764 | %d\n", ft_sqrt(1764));
	printf("     46340 | %d\n", ft_sqrt(46340));
	printf("    443556 | %d\n", ft_sqrt(443556));
	printf("   1522756 | %d\n", ft_sqrt(1522756));
	printf("2147395600 | %d\n", ft_sqrt(2147395600));
	return (0);
}
