/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex07.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 20:06:17 by tpolonen          #+#    #+#             */
/*   Updated: 2021/05/28 20:16:33 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrev(char *str);

int		main(void)
{
	char test[] = "\"Forty-two\", said Deep Thought, with infinite majesty and calm.";

	printf("Input : %s\n", test);
	printf("Output: %s\n", ft_strrev(test))
	return (0);
}