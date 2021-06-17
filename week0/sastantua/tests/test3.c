/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 12:57:56 by tpolonen          #+#    #+#             */
/*   Updated: 2021/05/30 18:59:48 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		g_bottom_flr_width;
int		g_current_flr_width;

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	print_pyramid_floor(int flr_width)
{
	ft_putchar('/');
	while (flr_width > 0)
	{
		ft_putchar('*');
		flr_width--;
	}
	ft_putchar('\\');
	ft_putchar('\n');
}

void	ft_print_pyramid_door_floor(int flr_width, int dr_width, int doorknob)
{
	int pyramid_side_width;
	int current_side_count;

	ft_putchar('/');
	current_side_count = 0;
	pyramid_side_width = (flr_width - dr_width) / 2;
	while (current_side_count < pyramid_side_width)
	{
		ft_putchar('*');
		current_side_count++;
	}
	if (doorknob == 1)
	{
		while (dr_width > 2)
		{
			ft_putchar('|');
			dr_width--;
		}
		ft_putchar('$');
		ft_putchar('|');
	}
	else
	{
		while (dr_width > 0)
		{
			ft_putchar('*');
			dr_width--;
		}
	}
	pyramid_side_width = (flr_width - dr_width) / 2;
	while (current_side_count < pyramid_side_width)
	{
		ft_putchar('*');
		current_side_count++;
	}
	ft_putchar('\\');
	ft_putchar('\n');
}

void	print_pyramid_tier(int count, int is_bottom)
{
	int tier_height;
	int floors_left;

	tier_height = 2 + count;
	floors_left = tier_height;
	if (count > 1)
	{
		g_current_flr_width += 2 * (2 + (count / 2));
	}
	while (floors_left > 0)
	{
		print_pyramid_floor(g_current_flr_width);
		floors_left--;
		if (floors_left > 0)
			g_current_flr_width += 2;
	}
	if (is_bottom == 1)
	{
		ft_putchar(':');
		ft_putchar(')');
	}
}

void	print_pyramid(int tiers)
{
	int		count;

	count = 1;
	g_bottom_flr_width = 0;
	g_current_flr_width = 1;
	while (count < tiers)
	{
		print_pyramid_tier(count, 0);
		count++;
	}
	print_pyramid_tier(count, 1);
}

int		main(void)
{
	print_pyramid(1);
	printf("\ng_current_flr_width: %d\n", g_current_flr_width);
	print_pyramid(2);
	printf("\ng_current_flr_width: %d\n", g_current_flr_width);
	print_pyramid(3);
	printf("\ng_current_flr_width: %d\n", g_current_flr_width);
	print_pyramid(4);
	printf("\ng_current_flr_width: %d\n", g_current_flr_width);
	print_pyramid(8);
	printf("\ng_current_flr_width: %d\n", g_current_flr_width);
	return (0);
}
