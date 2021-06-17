/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 12:12:56 by tpolonen          #+#    #+#             */
/*   Updated: 2021/05/30 20:31:01 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		g_bottom_flr_width;
int		g_current_flr_width;

int		ft_putchar(char c);

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

void	print_pyramid_door_floor(int flr_width, int dr_width, int doorknob)
{
	int current_side_count;

	current_side_count = 0;
	ft_putchar('/');
	while (current_side_count < (flr_width - dr_width) / 2)
	{
		ft_putchar('*');
		current_side_count++;
	}
	while (dr_width > 2)
	{
		ft_putchar('|');
		dr_width--;
	}
	if (doorknob == 1)
		ft_putchar('$');
	else
		ft_putchar('|');
	ft_putchar('|');
	while (current_side_count > 0)
	{
		ft_putchar('*');
		current_side_count--;
	}
	ft_putchar('\\');
	ft_putchar('\n');
}

void	print_pyramid_tier(int count, int is_bottom)
{
	int tier_height;
	int floors_left;
	int dr_width;

	tier_height = 2 + count;
	floors_left = tier_height;
	dr_width = (count + 1) / 2 + ((count + 1) / 2) - 1;
	if (count > 1)
	{
		g_current_flr_width += 2 * (2 + (count / 2));
	}
	while (floors_left > tier_height - dr_width)
	{
		print_pyramid_floor(g_current_flr_width);
		floors_left--;
		g_current_flr_width += 2;
	}
	if (is_bottom)
	{
		while (floors_left > 0)
		{
			print_pyramid_door_floor(g_current_flr_width, dr_width, 0);
			floors_left--;
			if (floors_left > 0)
				g_current_flr_width += 2;
		}
	}
	else
	{
		while (floors_left > 0)
		{
			print_pyramid_floor(g_current_flr_width);
			floors_left--;
			if (floors_left > 0)
				g_current_flr_width += 2;
		}
	}
}

void	print_pyramid(int tier)
{
	int		count;

	count = 1;
	g_bottom_flr_width = 0;
	g_current_flr_width = 1;
	while (count < tier)
	{
		print_pyramid_tier(count, 0);
		count++;
	}
	print_pyramid_tier(count, 1);
}

void	sastantua(int size)
{
	print_pyramid(size);
}
