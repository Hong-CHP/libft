/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 12:01:44 by hporta-c          #+#    #+#             */
/*   Updated: 2025/04/07 12:11:03 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char *ft_strchr(const char *s, int c)
{
	const char	*p;

	p = (const char *)s;
	if (c == '\0')
		return ((char *)(p + ft_strlen(p)));
	while (*p)
	{
		if (*p == c)
			return ((char *)p);
		p++;
	}
	return (NULL);
}
/*
int	main()
{
	const char *str = "a b c";
	int c = '\0';
	char *p = strchr(str, c);
	char *p1 = ft_strchr(str, c);
	
	printf("%s\n", p);
	printf("%s", p1);
}*/
