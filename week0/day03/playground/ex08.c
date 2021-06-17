/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex08.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 20:38:03 by tpolonen          #+#    #+#             */
/*   Updated: 2021/05/29 11:43:31 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		ft_atoi(char *str);

int		main(void)
{
	int		val;
	int		ft_val;
	char	str[20];

	strcpy(str, "98993489");
	val = atoi(str);
	ft_val = ft_atoi(str);
	printf("String value = %s, atoi = %d, ft_atoi = %d\n", str, val, ft_val);
	strcpy(str, "forty-two");
	val = atoi(str);
	ft_val = ft_atoi(str);
	printf("String value = %s, atoi = %d, ft_atoi = %d\n", str, val, ft_val);
	return (0);
}
