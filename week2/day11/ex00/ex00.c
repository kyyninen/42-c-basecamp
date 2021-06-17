/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 11:27:23 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/09 12:08:11 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

int		main(void)
{
	int		nbr = 42;
	void	*data;
	t_list	*test;

	data = &nbr;
	test = ft_create_elem(data);
	printf("This is the number turned into a void pointer: %d\n",
	*((int*)data));
	printf("This is the number we put into our list: %d\n",
	*((int*)test->data));
	return (0);
}
