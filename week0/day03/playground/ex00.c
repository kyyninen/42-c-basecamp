/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 11:51:44 by tpolonen          #+#    #+#             */
/*   Updated: 2021/05/29 11:45:44 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr);

int		main(void)
{
	int		test;
	int		*ptr_test;

	test = 3;
	ptr_test = &test;
	printf("test before ft_ft: %d\n", test);
	ft_ft(ptr_test);
	printf("test after ft_ft: %d\n", test);
	return (0);
}
