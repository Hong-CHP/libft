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

int	ft_strstr(const char *big, const char *little)
{
	char	*s1;
	char	*s2;	
	char	*large;

	if (little == NULL)
		return (0);
	large = (char *)big;
	printf("%p\n", large);
	while (*large)
	{	
		if (*large == *little)
		{
			s1 = (char *)large;
			s2 = (char *)little;
			while (*s1 == *s2)
			{
				s1++;
				//printf("%p\n", s1);
				s2++;
				//printf("%p %p\n", s1);
			}
			if (*s2 == '\0' || *s1 == '\0')
			{
				printf("%p - %p\n", s1, big);
				return (s1 - big);
			}
		}
		large++;
	}
	return (-1);
}

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

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*p;
	int		start;	
	int		end;

	if (!s1)
		return (NULL);
	start = 0;
	printf("%p\n", s1);
	start = ft_strstr(s1, set);
	printf("%d\n", start);
	printf("%p\n", s1 + start);
	end = ft_strstr(s1 + start, set);
	printf("%d\n", end);
	p = (char *)malloc((end - start) * sizeof(char));
	return (p);
}

int	main()
{
	char	s1[] = "!* hello!!!world!* ";
	char	set[] = "!* ";
	//printf("%d", ft_strstr(s1, set, 0));	
	printf("%s\n", ft_strtrim(s1, set));
}
