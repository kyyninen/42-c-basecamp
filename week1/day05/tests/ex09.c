/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex09.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 20:37:30 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/02 07:20:13 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str);

int		main(void)
{
	char	test1[] = "\"FORTY-TWO,\" SAID DEEP THOUGHT, WITH INFINITE MAJESTY AND CALM.";
	char	test2[] = "THE SH1PS H¤NG_IN THE SK% IN M()H T!E SAME W?Y TH*T BRICKS DON\'T.";
	char	test3[] = "\n\b\tTheseLettersAreBig9382\a\n\b\t4\v573897475¤!\"#THESEALLAREALLCAPSBABY¤\"";
	// char	test4[] = "There's actually some chars after termination byte\0ANDHERETHEYARE.";
	
	printf("%s\n", test1);
	printf("%s\n\n", ft_strlowcase(test1));
	printf("%s\n", test2);
	printf("%s\n\n", ft_strlowcase(test2));
	printf("%s\n", test3);
	printf("%s\n\n", ft_strlowcase(test3));
	// printf("%s\n", test4);
	// printf("%s\n\n", ft_strlowcase(test3));
	printf("And here are all the strings after lowercasing:\n\n%s\n\n%s\n\n%s\n\n", test1, test2, test3);
	return (0);
}
