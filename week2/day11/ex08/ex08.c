/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex08.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 18:40:21 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/09 19:13:53 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include "lists.h"
#include "ft_list_reverse.h"
#include <stdio.h>
#include <stdlib.h>

void	test_reverse(char **strings)
{
	t_list	**new_list;	
	
	printf("Listifying and reversing string arr starting with [%s]\n", *strings);
	new_list = malloc(sizeof(t_list));
	listify_str_arr(new_list, strings, &ft_list_push_back);
	ft_list_reverse(new_list);
	print_str_list(new_list);
	ft_list_clear(new_list);
	printf("\n");
}

int		main(void)
{
	char	*strings1[] = {"the", "great", "leader", "has", "fallen", 0};
	char	*strings2[] = {"this", "\\\\\\", "0", "can", "be", "", "tricky", 0};
	char	*strings3[] = {"sunshine", 0};
	char	*strings4[] = { 0 };

	test_reverse(strings1);
	test_reverse(strings2);
	test_reverse(strings3);
	test_reverse(strings4);
}