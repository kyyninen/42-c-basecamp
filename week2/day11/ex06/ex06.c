/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex06.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 21:05:14 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/08 21:15:52 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include "lists.h"
#include "ex06.h"
#include <stdio.h>
#include <stdlib.h>

int		main(void)
{
	char	*strs[] = 
	{ "The", "ships", "hung", "in", "the", "sky", "in", "much", "the", "same",
	"way", "that", "bricks", "don\'t.", 0};
	t_list	**new_list;

	new_list = malloc(sizeof(t_list));
	listify_str_arr(new_list, strs, &ft_list_push_back);
	printf("Here's a list before clearing:\n");
	print_str_list(new_list);
	ft_list_clear(new_list);
	printf("Next line should be command line:\n");
	print_str_list(new_list);
	return (0);
}