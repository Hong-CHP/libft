/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 10:08:13 by hporta-c          #+#    #+#             */
/*   Updated: 2025/04/04 16:40:52 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front_bonus(t_list **lst, t_list *new)
{
	if (!*lst && new)
	{
		*lst = new;
		return;	
	}
	if (*lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}	
/*
int	ft_lstsize(t_list *lst)
{
	t_list *curr;
	int	count;
	
	curr = lst;
	count = 0;
	while (curr)
	{
		count++;
		curr = curr->next;
	}
	return (count);
}

t_list	*ft_lstlast(t_list *lst)
{
	t_list *last;

	last = lst;
	while (last)//10 22
	{
		if (last->next == NULL) //22 != NULL 22->next =NULL
			return (last); //22
		last = last->next; //last = 22
	}
	return (NULL);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *curr;
	
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	curr = *lst;
	while (curr->next)
		curr = curr->next;
	//inserer entre curr et NULL un new ele
	curr->next = new;
	new->next = NULL;
}

void	ft_del_ele(void *content)
{
	free(content);
}

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst && del)
	{
		del(lst->content);
		free(lst);
	}
}

void	ft_lstclear(t_list **lst, void (*del)(void *));
{
	t_list	*curr;
	
	curr = *lst;
	while (curr)
	{
		del(curr->content);
		free(curr);
		curr = curr->next;
	}
	*lst = NULL;
}

void	ft_lst_iter(void *content)
{
	int	a = 10;
	printf("%d ", *content + a);
}

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*curr;
	
	curr = lst;
	while (curr)
	{
		f(curr->content);
		curr = curr->next;
	}	
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
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
			ft_lstclear(&new_node, ft_del_ele);
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

int	main()
{
	int	a; 
	int	c;
	int	*pb;
	t_list	*head;
	t_list	*ele_a;
	t_list	*ele_b;
	t_list	*ele_c;
	t_list	*curr;
	int	len;
		
	head = NULL;
	a = 22;
	c = 30;
	pb = (int *)malloc(sizeof(int));
	if (!pb)
		return 1;
	*pb = 10;
	ele_a = ft_lstnew(&a);
	ele_b = ft_lstnew(pb);
	ele_c = ft_lstnew(&c);
	ft_lstadd_front(&head, ele_a);
	ft_lstadd_front(&head, ele_b);
	ft_lstadd_back(&head, ele_c);
	len = ft_lstsize(head);
	curr = head;
	while (curr)
	{
		printf("%d -> ", *(int *)curr->content);
		curr = curr->next;
	}
	printf("NULL");
	len = ft_lstsize(head);
	ft_lstdelone(ele_b, ft_del_ele);
	curr = head;
	while (curr)
	{
		printf("%d -> ", *(int *)curr->content);
		curr = curr->next;
	}
	printf("NULL");
	printf("\n%d\n", len);
	printf("%d\n", *(int *)ft_lstlast(head)->content);
}*/
