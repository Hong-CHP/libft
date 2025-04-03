/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 10:29:59 by hporta-c          #+#    #+#             */
/*   Updated: 2025/04/01 11:28:27 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;
	
	len = 0;
	if (src == NULL)
		return (0);
	while (src[len] && size - 1 > 0)
	{
		dst[len] = src[len];
		len++;
		size--;
	}
	dst[len] = '\0';
	return (len);
}
/*
int main()
{
	char dest[20];
	char *str = "hello world!";
	
	printf("%zu\n", ft_strlcpy(dest, str, 20));
	printf("%s", dest);
} */
