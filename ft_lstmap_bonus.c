/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 16:23:41 by hporta-c          #+#    #+#             */
/*   Updated: 2025/04/07 10:36:57 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap_bonus(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*new_lst;
	t_list	*new_node;
	t_list	*curr;
	
	if (!lst || !f || !del)
		return (NULL);
	new_lst = NULL;
	curr =  lst;
	while (curr)
	{
		new_node = (t_list*)malloc(sizeof(t_list));
		if (!new_node)
		{
			ft_lstclear_bonus(&new_node, del); 
			return (NULL);
		}
		new_node->content = f(curr->content);
		new_node->next = NULL;
		if (!new_lst)
			new_lst = new_node;
		else
		{
			tmp = new_lst;
			while (tmp->next)
			{
				tmp->next = new_node;
				tmp = tmp->next;
			}		
		}	
		curr = curr->next;
	}
	return (new_lst);
}
