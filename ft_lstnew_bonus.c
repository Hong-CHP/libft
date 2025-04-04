# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
#                                                     +:+ +:+         +:+      #
#    By: hporta-c <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/04 10:00:47 by hporta-c          #+#    #+#              #
/*   Updated: 2025/04/04 16:42:59 by hporta-c         ###   ########.fr       */
#                                                                              #
# **************************************************************************** #

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew_bonus(void *content)
{
	t_list	*new_elem;

	new_elem = (t_list *)malloc(sizeof(t_list));
	if (!new_elem)
		return (NULL);
	new_elem->content = content;
	new_elem->next = NULL;
	return (new_elem);
}
