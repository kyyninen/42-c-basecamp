/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 14:55:39 by tpolonen          #+#    #+#             */
/*   Updated: 2021/05/31 15:33:48 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void)
{
	char	source[] = "\"Forty-two,\" said Deep Thought, with infinite majesty and calm.  ";
	char	destination[] = "The ships hung in the sky in much the same way that bricks don\'t.";
	char	destination2[] = "The ships hung in the sky in much the same way that bricks don\'t.";

	printf("ft_strncpy(dest, src, 12):\n%s ->\n%s\n===\n", source, destination);
	ft_strncpy(destination, source, 12);
	printf("%s\n\n", destination);
	printf("strncpy(dest, src, 12):\n%s ->\n%s\n===\n", source, destination2);
	strncpy(destination2, source, 12);
	printf("%s\n\n", destination);

	if (strcmp(destination, destination2) == 0)
		printf("Great success :D\n");
	else
		printf("Oh no! Different results D:\n");
}
