/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 13:52:39 by hporta-c          #+#    #+#             */
/*   Updated: 2025/04/01 14:07:22 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *p1;
	unsigned char *p2;

	p1 = (unsigned char*)s1;
	p2 = (unsigned char*)s2;
	if (n == 0)
		return (0);
	while (n > 0 && *p1 == *p2)
	{
		p1++;
		p2++;
		n--;
	}
	return ((unsigned char)*p1 - (unsigned char)*p2);
}

int	main()
{
	char *s1 = "pomme";
	char *s2 = "poire";
	printf("%d\n", ft_memcmp(s1, s2, 4));
	char *s3 = "abc";
	char *s4 = "abcd";
	printf("%d\n", ft_memcmp(s3, s4, 4));
	char *s9 = "pomme";
    char *s10 = "poire";
    printf("%d\n", memcmp(s1, s2, 4));
    char *s11 = "abc";
    char *s12 = "abcd";
    printf("%d\n", memcmp(s3, s4, 4));
}
