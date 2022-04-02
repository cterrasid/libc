/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrasi <cterrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 16:47:35 by cterrasi          #+#    #+#             */
/*   Updated: 2022/04/02 14:06:57 by cterrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* -------------------------------------------------------------------------- */
/* Add the element 'new' to the beginning of the list.					      */
/* -------------------------------------------------------------------------- */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

// int	main(void)
// {
// 	t_list	*head = ft_lstnew("Terrasi");
// 	t_list	*node = ft_lstnew("Clarette");

// 	ft_lstadd_front(&head, node);
// 	printf("%s\n", head->content);
// 	return (0);
// }
