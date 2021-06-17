/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex05.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 16:00:29 by tpolonen          #+#    #+#             */
/*   Updated: 2021/05/31 19:52:14 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int		main(void)
{
	char	haystack[] = "The ships hung in the sky in much the same way that bricks don\'t.";
	char	needle[] = "bricks";
	
	printf("Haystack: %s\nNeedle: %s\n\n", haystack, needle);
	printf("strstr:\n%s\n\n", strstr(haystack, needle));
	printf("ft_strstr:\n%s\n\n", ft_strstr(haystack, needle));
}
