/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex03.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 13:57:55 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/08 16:37:15 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include "ft_list_size.h"
#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

int		main(void)
{
	t_list	**new_list;
	char	*strings1[] = {"the", "great", "leader", "has", "fallen", 0};
	char	*strings2[] = {"this", "", "0", "can", "be", "\n\a\v", "tricky", 0};
	char	*strings3[] = {"sunshine", 0};
	char	*strings4[] = {0};

	new_list = malloc(sizeof(t_list));
	listify_str_arr(new_list, strings1, &ft_list_push_back);
	print_str_list(new_list);
	printf("size of the list is %d\n", ft_list_size(*new_list));
	free_list(new_list);
	new_list = malloc(sizeof(t_list));
	listify_str_arr(new_list, strings2, &ft_list_push_back);
	print_str_list(new_list);
	printf("size of the list is %d\n", ft_list_size(*new_list));
	free_list(new_list);
	new_list = malloc(sizeof(t_list));
	listify_str_arr(new_list, strings3, &ft_list_push_back);
	print_str_list(new_list);
	printf("size of the list is %d\n", ft_list_size(*new_list));
	free_list(new_list);
	new_list = malloc(sizeof(t_list));
	listify_str_arr(new_list, strings4, &ft_list_push_back);
	print_str_list(new_list);
	printf("size of the list is %d\n", ft_list_size(*new_list));
	free_list(new_list);
	return (0);
}