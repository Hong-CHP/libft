/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 11:12:52 by hporta-c          #+#    #+#             */
/*   Updated: 2025/04/07 15:26:10 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	d_len;
	size_t	s_len;
	char	*p;
	
	d_len = 0;
	s_len = 0;
	p = dest;
	while (*p)
	{
		p++;
		d_len++;
	}
	while (src[s_len])
		s_len++;
	if (size <= d_len)
		return (s_len + size);
	while (size - 1 > 0 && *src)
	{
		*p++ = *src++;
		size--;
	}
	//printf("%lu", d_len + s_len);
	*p = '\0';
	return (d_len + s_len);	
}
/*
int	main()
{
	char dest[20];
	char *str = "hello world!";
	
	dest[0] = 'B';
	printf("%zu\n", ft_strlcat(dest, str, 4));
	printf("%s\n", dest);
}*/

int main(void)
{
	char	dst[30];
	char	*src = "AAAAAAAAA";

	memset(dst, 0, 30);
	memset(dst, 'X', 10);
	printf("strlcat returned %ld\n", ft_strlcat(dst, src, 20));
	for (int i = 0; i < 30; i++)
		if (dst[i])
			printf("%c", dst[i]);
		else
			printf("?");
}
