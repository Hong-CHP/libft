/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 14:09:09 by hporta-c          #+#    #+#             */
/*   Updated: 2025/04/01 15:16:42 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	char	*s1;
	char	*s2;	
	char	*large;

	if (little == NULL)
		return ((char *)big);
	i = 0;
	large = (char *)big;
	while (i < len && *large)
	{
		if (*large == *little)
		{
			s1 = (char *)large;
			s2 = (char *)little;
			while (*s1 == *s2)
			{
				s1++;
				s2++;
			}
			if (*s2 == '\0')
				return ((char*)large);
		}
		large++;
		i++;
	}
	return (NULL);
}
/*
int main()
{
	const char *largestring = "Foo Bar Baz";
    const char *smallstring = "Bar";
	
	const char *large = "hello thenews new world";
	const char *small = "lo";
    char *ptr;

    ptr = ft_strnstr(largestring, smallstring, 4);
	printf("%s\n", ptr);
	ptr = ft_strnstr(largestring, smallstring, 11);
	printf("%s\n", ptr);
	ptr = ft_strnstr(large, small, 10);
	printf("%s\n", ptr);
    //ptr = strnstr(largestring, smallstring, 11);
   // printf("%s\n", ptr);
}	*/
