/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex12.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 03:54:50 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/01 03:56:52 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_numeric(char *str);

int		main(void)
{
	char	test1[] = "1234568798465487754657987864657489";
	char	test2[] = "6548768746i\bps hun56785 sky in much the sa\ne way th\tat bricks don\'t.";

	printf("%s\n", test1);
	if (ft_str_is_numeric(test1) == 1)
		printf("Diff OK :D\n\n");
	else
		printf("KO D:\n\n");
	printf("%s\n", test2);
	if (ft_str_is_numeric(test2) == 0)
		printf("Diff OK :D\n\n");
	else
		printf("KO D:\n\n");
}
