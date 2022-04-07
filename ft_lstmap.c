/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrasi <cterrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 16:48:33 by cterrasi          #+#    #+#             */
/*   Updated: 2022/04/06 20:20:50 by cterrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* -------------------------------------------------------------------------- */
/* Creates a copy of a list 'lst' and applies the function 'f' to the content */
/* of each element of the copy.												  */
/* The 'del' function will remove the content of an element if needed.		  */
/* Returns a pointer to the beginning of the new list (the copy of 'lst').	  */
/* -------------------------------------------------------------------------- */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*walker;
	t_list	*head;

	if (lst && f)
	{
		head = ft_lstnew(f(lst->content));
		if (head)
		{
			walker = head;
			lst = lst->next;
			while (lst)
			{
				walker->next = ft_lstnew(f(lst->content));
				if (!walker)
				{
					ft_lstclear(&head, del);
					return (NULL);
				}
				walker = walker->next;
				lst = lst->next;
			}
			return (head);
		}
	}
	return (NULL);
}

// static void	*f(void *content)
// {
// 	(void)content;
// 	return (content);
// }

// static void	del(void *el)
// {
// 	free(el);
// }

// int	main(void)
// {
// 	t_list	*lst;
// 	t_list	*node;
// 	t_list	*new;

// 	lst = ft_lstnew("Original list");
// 	node = ft_lstnew("Original node");
// 	lst->next = node;

// 	new = ft_lstmap(lst, f, del);

// 	printf("%s\n", new->content);
// 	return (0);
// }
