/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex03.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 14:55:39 by tpolonen          #+#    #+#             */
/*   Updated: 2021/05/31 19:34:19 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

int		main(void)
{
	char	source[] = "The ships hung in the sky in much the same way that bricks don\'t.";
	char	destination[] = "\"Forty-two,\" said Deep Thought, with infinite majesty and calm.  ";
	char	source2a[] = "The ships";
	char	destination2a[] = "\"Forty-two,\" said Deep Thought, with infinite majesty and calm.  ";
	char	source2b[] = "The ships";
	char	destination2b[] = "\"Forty-two,\" said Deep Thought, with infinite majesty and calm.  ";
	char	source3a[] = "The ships hung in the sky in much the same way that bricks don\'t.";
	char	destination3a[] = "\"Forty-two,\"";
	char	source3b[] = "The ships hung in the sky in much the same way that bricks don\'t.";
	char	destination3b[] = "\"Forty-two,\"";
	

	printf("Testing with strings of same length...\n%s ->\n%s\n", source, destination);
	ft_strcpy(destination, source);
	if (strcmp(source, destination) == 0)
		printf("String copied succesfully :)\n\n");
	else
		printf("Oh no! String didn't copy D: %s v. %s\n\n", source, destination);

	printf("Source is smaller than destination...\n%s ->\n%s\n", source2a, destination2a);
	strcpy(destination2a, source2a);
	printf("Output (strcopy):\n%s\n", destination2a);
	ft_strcpy(destination2b, source2b);
	printf("Output (ft_strcopy):\n%s\n\n", destination2b);
	
	printf("Destination is smaller than source...\n%s ->\n%s\n", source3a, destination3a);
	strcpy(destination3a, source3a);
	printf("Output (strcopy):\n%s\n", destination3a);
	ft_strcpy(destination3b, source3b);
	printf("Output (ft_strcopy):\n%s\n\n", destination3b);
}
