/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 12:01:44 by hporta-c          #+#    #+#             */
/*   Updated: 2025/03/31 12:34:07 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char *ft_strchr(const char *s, int c)
{
	char	*p;

	p = (char *)s;
	while (*p)
	{
		if (*p == c)
			return (p);
		p++;
	}
	return (NULL);
}
/*
int	main()
{
	const char *str = "GeeksforGeeks";
	int c = 's';
//	char *p = strchr(str, c);
	char *p1 = ft_strchr(str, c);
	
//	printf("%s\n", p);
	printf("%s", p1);
}*/
