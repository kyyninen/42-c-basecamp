/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libtest.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 06:43:34 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/01 07:16:53 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_swap(int *a, int *b);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);

int		main(void)
{
	int		a;
	int		b;
	int		score;
	char	test[] = "Let's get strlen of this string.\n";
	
	a = 1;
	b = 42;
	score = 0;
	ft_putstr("Hey! Here's a string to begin with :)");
	ft_putchar('\n');
	ft_putstr("This should be on a new line...\n\n");
	ft_swap(&a, &b);
	if (a == 42)
		ft_putstr("Swapped int successfully :)");
	else
	{
		ft_putstr("Oh no! ft_swap didn't work D:");
		score++;
	}
	ft_putchar('\n');
	ft_putchar('\n');
	ft_putstr(test);
	if (ft_strlen(test) == 33)
		ft_putstr("Result was 33! Correct!");
	else
	{
		ft_putstr("Oh no! Wrong result D:");
		score++;
	}
	ft_putchar('\n');
	ft_putchar('\n');
	ft_putstr("Is \"Hello\" same as \"Hello\"?\n");
	if (ft_strcmp("Hello", "Hello") == 0)
		ft_putstr("Got correct result :D");
	else
	{
		ft_putstr("Oh no! strcmp didn't work right D:");
		score++;
	}
	ft_putchar('\n');
	ft_putchar('\n');
	ft_putstr("Is \"Hello\" same as \"World\"?\n");
	if (ft_strcmp("Hello", "World") != 0)
		ft_putstr("Got correct result :D");
	else
	{
		ft_putstr("Oh no! strcmp didn't work right D:");
		score++;
	}
	ft_putchar('\n');
	ft_putchar('\n');
	if (score == 0)
		ft_putstr("Functions worked right! Congrats :D");
	else
		ft_putstr("Some mistakes were made :S");
	ft_putchar('\n');
}
