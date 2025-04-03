/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 13:48:17 by hporta-c          #+#    #+#             */
/*   Updated: 2025/04/03 14:32:38 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	ft_itoa_len(int n)
{
	long long	nb;
	int			len;
	
	len = 0;
	nb = (long long)n;
	if (n < 0)
	{
		nb = -nb;
		len++;
	}
	while (nb > 0)
	{
		len++;
		nb /= 10;
	}
	//printf("%d", len);
	return (len);
}

char	*ft_itoa(int n)
{
	long long	nb;
	int			len;
	char		*p;
	
	if (n == 0)
		return ("0");
	len = ft_itoa_len(n);
	p = (char *)malloc((len + 1) * sizeof(char));
	if (!p)
		return (NULL);
	nb = (long long)n;
	//printf("%lld\n", nb);
	if (n < 0)
		nb = -nb;
	p[len] = '\0';
	while (len > 0)
	{
		len--;
		p[len] = (nb % 10) + '0';
		nb /= 10;
		if (n < 0)
			p[0] = '-';
	}
	return (p);
}

int	main()
{
	//ft_itoa_len(-2314);
	printf("%s", ft_itoa(0));
}
