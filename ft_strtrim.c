/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 10:40:45 by hporta-c          #+#    #+#             */
/*   Updated: 2025/04/02 13:10:31 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	char	*p;

	p = str;
	while (*str)
		str++;
	return (str - p);
}

char	*ft_strstr(const char *big, const char *little)
{
	char	*s1;
	char	*s2;	
	char	*large;

	if (little == NULL)
		return (0);
	large = (char *)big;
	while (*large)
	{	
		if (*large == *little)
		{
			s1 = (char *)large;
			s2 = (char *)little;
			while (*s1 == *s2 && *s1)
			{
				s1++;
				s2++;
			}
			if (*s2 == '\0')
				return ((char *)s1);
		}
		large++;
	}
	return (NULL);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*p;
	char	*start;	
	char	*end;
	char	*res;

	if (!s1)
		return (NULL);
	start = ft_strstr(s1, set);
	end = ft_strstr(start, set);
	end -= ft_strlen((char *)set);
	p = (char *)malloc((end - start + 1) * sizeof(char));
	if (!p)
		return (NULL);
	res = p;
	while (end > start)
		*p++ = *start++;
	*p = '\0';
	return (res);
}

int	main()
{
	char	s1[] = "!** hello!!!world!** ";
	char	set[] = "!** ";
	printf("%s\n", ft_strtrim(s1, set));
}
