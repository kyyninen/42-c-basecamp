/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex11.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 21:36:20 by tpolonen          #+#    #+#             */
/*   Updated: 2021/05/31 21:42:22 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_alpha(char *str);

int		main(void)
{
	char	test1[] = "OnlyAlphabeticCharactersHere";
	char	test2[] = "The shi\bps hun56785 sky in much the sa\ne way th\tat bricks don\'t.";

	printf("%s\n", test1);
	if (ft_str_is_alpha(test1) == 1)
		printf("Diff OK :D\n\n");
	else
		printf("KO D:\n\n");
	printf("%s\n", test2);
	if (ft_str_is_alpha(test2) == 0)
		printf("Diff OK :D\n\n");
	else
		printf("KO D:\n\n");
}