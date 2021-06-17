/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 15:16:10 by tpolonen          #+#    #+#             */
/*   Updated: 2021/05/31 11:21:31 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		tier_extra_width(int tier)
{
	return (2 + ((tier + 1) / 2));
}

int		tier_door_size(int tier)
{
	return ((tier + 1) / 2) + (((tier + 1) / 2) - 1);
}

void	print_test_line(int tier)
{
	printf("   %d |                          %d |                       %d\n",
	tier, tier_extra_width(tier), tier_door_size(tier));
}

int		main(void)
{
	printf("Tier | Extra floor width per side | Door size if bottom tier\n");
	print_test_line(1);
	print_test_line(2);
	print_test_line(3);
	print_test_line(4);
	print_test_line(5);
	print_test_line(6);
	print_test_line(7);
	print_test_line(8);
	print_test_line(9);
}
