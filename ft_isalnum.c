/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 09:40:09 by hporta-c          #+#    #+#             */
/*   Updated: 2025/03/31 09:41:14 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <='9')
		|| (c >= 'a' && c <='z')
		|| (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

int	main()
{
	 printf("%d ", ft_isalnum(48));
	 printf("%d ", ft_isalnum(57));
	 printf("%d ", ft_isalnum(39));
	printf("%d ", ft_isalnum(67));
	printf("%d ", ft_isalnum(109));
	printf("%d", ft_isalnum(127));
}
