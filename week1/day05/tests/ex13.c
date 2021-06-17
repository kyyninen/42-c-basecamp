/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex13.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 04:02:50 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/01 04:07:43 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_lowercase(char *str);

int		main(void)
{
	char	test1[] = "theshipshungintheskyinmuchthesamewaythatbricksdont";
	char	test2[] = "\"Forty-two,\" said Deep Thought, with infinite majesty and calm.";

	printf("%s\n", test1);
	if (ft_str_is_lowercase(test1) == 1)
		printf("Diff OK :D\n\n");
	else
		printf("KO D:\n\n");
	printf("%s\n", test2);
	if (ft_str_is_lowercase(test2) == 0)
		printf("Diff OK :D\n\n");
	else
		printf("KO D:\n\n");
}