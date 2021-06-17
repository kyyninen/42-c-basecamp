/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 10:31:57 by tpolonen          #+#    #+#             */
/*   Updated: 2021/05/31 13:39:19 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int 	print_sample_row(char *str)
{
	printf("atoi(\"%s\"): %d\n", str, atoi(str));
	if (atoi(str) == ft_atoi(str))
	{
		printf("ft_atoi matches! :D\n\n");
		return (0);
	}
	else
	{
		printf("no match D: (%d)\n\n", ft_atoi(str));
		return (1);
	}
}

int		main(void)
{
	int score;

	score = 0;
	score += print_sample_row("42");
	score += print_sample_row("-42");
	score += print_sample_row("forty-two");
	score += print_sample_row("001000");
	score += print_sample_row("001\n000");
	score += print_sample_row("9f2qq41");
	score += print_sample_row("sz6edr84");
	score += print_sample_row("------12");
	score += print_sample_row("+1");
	score += print_sample_row("+-+-+-45");
	score += print_sample_row(" 4    2");
	score += print_sample_row("      42");
	score += print_sample_row("qqqqq1");
	score += print_sample_row("1+1+1+1+1");
	score += print_sample_row("+1+1+1+1");
	score += print_sample_row("-1+1+1+1");
	score += print_sample_row("q7");
	score += print_sample_row("+2147483647");
	score += print_sample_row("-2147483648");
	score += print_sample_row("-2147483647");
	score += print_sample_row("--10");
	score += print_sample_row("+-10");
	score += print_sample_row("-+10");
	score += print_sample_row("++10");
	score += print_sample_row("\n\n\n\n\n\n\n10");
	score += print_sample_row("+       10");
	score += print_sample_row("     +10");
	score += print_sample_row("\n\n\n\n\n\n\n-10");
	score += print_sample_row("\n\n\n\n\n\n\n+10");
	
	if (score > 0)
		printf("oh no! failed with %d tests\n", score);
	else
		printf("great success! :)\n");
}
