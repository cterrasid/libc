/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrasi <cterrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 16:47:26 by cterrasi          #+#    #+#             */
/*   Updated: 2022/04/02 14:41:07 by cterrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* -------------------------------------------------------------------------- */
/* Add the element 'new' to the end of the list.						      */
/* -------------------------------------------------------------------------- */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (*lst == NULL)
		*lst = new;
	else
		(ft_lstlast(*lst))->next = new;
}

// int	main(void)
// {
// 	t_list	*last = ft_lstnew("Last");
// 	t_list	*new = ft_lstnew("New");

// 	last = NULL;
// 	ft_lstadd_back(&last, new);
// 	printf("%s\n", last->content);
// 	return (0);
// }
