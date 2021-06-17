/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex16.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 04:57:38 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/01 05:32:05 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int		main(void)
{
	char	src[] = "in much the same way that bricks don\'t.";
	
	char	test1a[65] = "The ships hung in the sky ";
	char	test1b[65] = "The ships hung in the sky ";
	char	test2a[28] = "The ships hung in the sky ";
	char	test2b[28] = "The ships hung in the sky ";

	printf("Strings to concatenate:\n\"%s\" (size 65)\n\"%s\"\n\n", test1a, src);
	printf("strcat:\n%s\nft_strcat:\n%s\n", strcat(test1a, src), ft_strcat(test1b, src));
	if (strcmp(test1a, test1b) == 0)
		printf("It's a match :D\n\n");
	else
		printf("KO D:\n\n");
	printf("Strings to concatenate:\n\"%s\" (size 28)\n\"%s\"\n\n", test2a, src);
	printf("strcat:\n%s\nft_strcat:\n%s\n", strcat(test2a, src), ft_strcat(test2b, src));
	if (strcmp(test2a, test2b) == 0)
		printf("It's a match :D\n\n");
	else
		printf("KO D:\n\n");
	return (0);
}
