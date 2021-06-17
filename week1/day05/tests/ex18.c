/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex18.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 13:58:07 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/01 18:46:47 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

size_t			strlcat(char *dst, const char *src, size_t siz)
{
	char		*d = dst;
	const char	*s = src;
	size_t		n = siz;
	size_t		dlen;

	/* Find the end of dst and adjust bytes left but don't go past end */
	while (n-- != 0 && *d != '\0')
		d++;
	dlen = d - dst;
	n = siz - dlen;

	if (n == 0)
		return(dlen + strlen(s));
	while (*s != '\0') {
		if (n != 1) {
			*d++ = *s;
			n--;
		}
		s++;
	}
	*d = '\0';

	return (dlen + (s - src));	/* count does not include NUL */
}

int			test_strlcat(unsigned int size, char *dst, char *src)
{
	int result = 0;
	
	printf("\"%s\" + \"%s\" =>\n", dst, src);
	result = strlcat(dst, src, size);
	printf("\"%s\" returns %d\n\n", dst, result);
	return (result);
}

int			test_ft_strlcat(unsigned int size, char *dst, char *src)
{
	int result = 0;
	
	printf("\"%s\" + \"%s\" =>\n", dst, src);
	result = ft_strlcat(dst, src, size);
	printf("\"%s\" returns %d\n\n", dst, result);
	return (result);
}

int			main(void)
{
	char	source[] = " with infinite majesty and calm.";
	char	dest1a[63] = "\"Forty-two,\" said Deep Thought,";
	char	dest1b[63] = "\"Forty-two,\" said Deep Thought,";
	char	dest3a[63] = "\"Forty-two,\" said Deep Thought,";
	char	dest3b[63] = "\"Forty-two,\" said Deep Thought,";

	printf("Testing strlcat(99) with destination string that has enough size:\n");
	test_strlcat(99, dest1a, source);
	printf("Testing strlcat(42) with destination string that has enough size:\n");
	test_strlcat(42, dest3a, source);
	printf("Testing ft_strlcat(99) with destination string that has enough size:\n");
	test_ft_strlcat(99, dest1b, source);
	printf("Testing ft_strlcat(42) with destination string that has enough size:\n");
	test_ft_strlcat(42, dest3b, source);
	return (0);
}
