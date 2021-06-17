/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex19.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 17:28:38 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/01 18:43:35 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t
strlcpy(char *dst, char *src, size_t maxlen) {
    const size_t srclen = strlen(src);
    if (srclen + 1 < maxlen) {
        memcpy(dst, src, srclen + 1);
    } else if (maxlen != 0) {
        memcpy(dst, src, maxlen - 1);
        dst[maxlen-1] = '\0';
    }
    return srclen;
}

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

void	test_strlcpy(char *dst, char *src)
{
	printf("\"%s\" -> \"%s\"\n", src, dst);
	strlcpy(dst, src, strlen(dst) + 1);
	printf("\"%s\"\n\n", dst);
}

void	test_ft_strlcpy(char *dst, char *src)
{
	printf("\"%s\" -> \"%s\"\n", src, dst);
	ft_strlcpy(dst, src, strlen(dst) + 1);
	printf("\"%s\"\n\n", dst);
}

int		main(void)
{
	char	source[] = "Hello";
	char	dest1a[] = "World";
	char	dest1b[] = "World";
	char	dest2a[] = "World World";
	char	dest2b[] = "World World";
	char	dest3a[] = "xyz";
	char	dest3b[] = "xyz";

	printf("Testing strlcpy(dst_len + 1):\n");
	test_strlcpy(dest1a, source);
	test_strlcpy(dest2a, source);
	test_strlcpy(dest3a, source);
	printf("Testing ft_strlcpy(dest_len + 1):\n");
	test_ft_strlcpy(dest1b, source);
	test_ft_strlcpy(dest2b, source);
	test_ft_strlcpy(dest3b, source);
}