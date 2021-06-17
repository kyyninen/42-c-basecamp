/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex15.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 04:23:05 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/01 04:42:26 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int		ft_str_is_printable(char *str);

int		str_is_printable(char *str)
{
	int index;

	index = 0;
	while(str[index] != '\0')
	{
		if (isprint(str[index]) == 0)
			return (0);
		index++;
	}
	return (1);
}

int		main(void)
{
	char	test1[] = "\"Forty-two,\" said Deep Thought, with infinite majesty and calm.";
	char	test2[] = "\"Forty-two,\" said Deep\vThought,\nwith infinite\tmajesty and calm.";

	printf("\nString:\n%s\nstr_is_printable: %d\nft_str_is_printable: %d\n",
	test1, str_is_printable(test1), ft_str_is_printable(test1));
	printf("\nString:\n%s\nstr_is_printable: %d\nft_str_is_printable: %d\n",
	test2, str_is_printable(test2), ft_str_is_printable(test2));
}
