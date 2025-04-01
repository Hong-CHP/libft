/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 11:12:52 by hporta-c          #+#    #+#             */
/*   Updated: 2025/04/01 11:27:12 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	char	*p;
	size_t	len;
	
	p = dest;
	len = 0; 
	if (src == NULL)
		return (0);
	while (*dest)
		dest++;
	while (size - 1 > 0 && src[len])
	{
		*dest++ = src[len];
		len++;
		size--;
	}
	*dest = '\0';
	return (len);	
}

int	main()
{
	char dest[20] = "gugu ";
	char *str = "hello world!";

	printf("%zu\n", ft_strlcat(dest, str, 20));
	printf("%s\n", dest);
}
