/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 12:57:56 by tpolonen          #+#    #+#             */
/*   Updated: 2021/05/30 17:02:47 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		g_bottom_floor_width;
int		g_current_floor_width;

int		ft_putchar(char c);

void	ft_print_pyramid_floor(int floor_width)
{
	ft_putchar('/');
	while (floor_width > 0)
	{
		ft_putchar('*');
		floor_width--;
	}
	ft_putchar('\\');
	ft_putchar('\n');
}

void	ft_print_pyramid_door_floor(int floor_width, int door_width, int print_doorknob);

void	ft_print_pyramid_tier(int tier, int bottom)
{
	
}

int		ft_print_pyramid_test(int size)
{
	int current_tier_height;
	int current_tier_floors_left;
	int current_floor_width;

	current_tier_height = 3;
	current_tier_floors_left = 3;
	current_floor_width = 1;
	while (size > 0)
	{
		while (current_tier_floors_left > 0)
		{
			ft_print_pyramid_floor(current_floor_width);
			current_floor_width += 2;
			current_tier_floors_left--;
		}
		if (size > 1)
		{
			current_tier_height++;
			current_tier_floors_left = current_tier_height;
			current_floor_width += 4;
		}
		size--;
	}
	return (current_floor_width);
}


int		main(void)
{
	ft_print_pyramid_test(5);
	return (0);
}