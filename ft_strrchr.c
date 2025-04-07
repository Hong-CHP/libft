/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 11:29:20 by hporta-c          #+#    #+#             */
/*   Updated: 2025/04/07 16:35:43 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
/*
size_t	ft_strlen(char *str)
{
	char	*p;

	p = str;
	while (*str)
		str++;
	return (str - p);
}*/

char	*ft_strrchr(const char *s, int c)
{
	const char	*p;
	int			len;
	char		*res;

	if (!s)
		return (NULL);
	p = s;
	res = (char *)p;
	len = ft_strlen(res);
	if (c == '\0')
		return ("");
	while (len >= 0)
	{
		len--;
		if (res[len] == c)
			return (res + len);
	}
	return (NULL);
}
/*
int	main()
{
	char str[] = "a,b,c";
	
	printf("%s\n", ft_strrchr(str, 'a'));
	//printf("%s\n", strrchr(str, 'a'));
}*/
