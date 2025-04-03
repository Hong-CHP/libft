/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 11:29:20 by hporta-c          #+#    #+#             */
/*   Updated: 2025/04/01 11:50:24 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
/*
int	ft_strlen(char *str)
{
	char	*p;

	p = str;
	while (*str)
		str++;
	return (str - p);
}*/

char	*ft_strrchr(const char *s, int c)
{
	char	*p;
	int	len;

	p = (char *)s;
	len = ft_strlen(p);
	printf("%d\n", len); 	
	if (p == NULL)
		return (NULL);
	while (len - 1 > 0)
	{
		if (p[len] == c)
			return (p + len);
		len--;
	}
	return (NULL);
}
/*
int	main()
{
	char *str = "GeeksforGeeks is for programming geeks.";
	
	printf("%s\n", ft_strrchr(str, 'f'));
	printf("%s\n", strrchr(str, 'f'));
}*/
