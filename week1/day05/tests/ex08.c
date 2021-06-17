/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex08.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 20:37:30 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/01 11:56:41 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str);

int		main(void)
{
	char	test1[] = "\"Forty-two,\" said Deep Thought, with infinite majesty and calm.";
	char	test2[] = "THE sh1ps h¤ng_in THE sk% in m()h t!e same w?y th*t bricks don\'t.";
	char	test3[] = "\n\b\tsomesmallletters9382\a\n\b\t4\v573897475¤!\"#andmoresmallletters¤\"";
	
	printf("%s\n", test1);
	printf("%s\n\n", ft_strupcase(test1));
	printf("%s\n", test2);
	printf("%s\n\n", ft_strupcase(test2));
	printf("%s\n", test3);
	printf("%s\n\n", ft_strupcase(test3));
}