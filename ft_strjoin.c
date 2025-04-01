/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 17:53:40 by hporta-c          #+#    #+#             */
/*   Updated: 2025/04/01 18:24:45 by hporta-c         ###   ########.fr       */
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

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	char	*p1;
	char	*p2;
	char	*res;

	if (!s1 || !s2)
		return (NULL);
	p1 = (char *)s1;
	p2 = (char *)s2;
	p = (char *)malloc((ft_strlen(p1) + ft_strlen(p2) + 1) * sizeof(char));
	if (!p)
		return (NULL);
	res = p;
	while(*p1)
		*p++ = *p1++;
	while (*p2)
		*p++ = *p2++;
	*p = '\0';
	return (res);
}

int	main()
{
	char *s1 = "gugu";
	char *s2 = "hello";
	printf("%s\n", ft_strjoin(s1, s2));
}
