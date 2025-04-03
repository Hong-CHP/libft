/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 15:52:31 by hporta-c          #+#    #+#             */
/*   Updated: 2025/04/01 17:07:11 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
/*
void	ft_bzero(void *s, size_t n)
{
	char	*p;
	size_t	i;
	
	i = 0;
	p = (char *)s;
	while(i < n)
	{
		p[i] = '\0';
		i++;
	}
	return ;
}*/

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	/*if (nmemb == 0 || size == 0)
		return (NULL);*/
	if (nmemb * size > 4294967295)
		return (NULL);
	p = malloc(nmemb * size);
	if (!p)
		return (NULL);
	ft_bzero(p, nmemb * size);
	return (p);
}
/*
int main()
{
	int	*tab = ft_calloc(4, sizeof(int));
	for (int i = 0; i < 4; i++)
		printf("%d ", tab[i]);
}*/
