/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 09:29:38 by hporta-c          #+#    #+#             */
/*   Updated: 2025/03/31 09:30:32 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_isdigit(int c)
{
	if (c >= '0' && c <='9')
		return (1);
	return (0);
}
/*
int	main()
{
	 printf("%d ", ft_isdigit(48));
	 printf("%d ", ft_isdigit(57));
	 printf("%d ", ft_isdigit(39));
}*/
