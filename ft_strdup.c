/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 17:13:41 by hporta-c          #+#    #+#             */
/*   Updated: 2025/04/01 17:27:42 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	int	len;
	
	len = 0;
	while (*s)
	{
		s++;
		len++;
	}
	return (len);
}

char	*ft_strdup(const char *s)
{
	char	*p;
	char	*dst;
	char	*ptr;

	if (!s)
		return (NULL);
	p = (char *)s;
	printf("%s\n", p); 
	dst = (char *)malloc((ft_strlen(p) + 1) * sizeof(char));
	ptr = dst;
	if (!dst)
		return (NULL);
	while (*p)
		*dst++ = *p++;
	*dst = '\0';
	return (ptr);
}

int	main()
{
	char *str = "hello world!";
	printf("%s\n", ft_strdup(str));	
}	
