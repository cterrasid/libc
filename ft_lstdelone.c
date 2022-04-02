/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrasi <cterrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 16:47:58 by cterrasi          #+#    #+#             */
/*   Updated: 2022/04/02 15:30:15 by cterrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* -------------------------------------------------------------------------- */
/* Takes an element as a parameter and frees the memory of the element's	  */
/* content using the function 'del' (given as parameter).					  */
/* Finally, frees the memory of the element.								  */
/* The memory of 'next' must not be freed.									  */
/* -------------------------------------------------------------------------- */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(lst->content);
	free(lst);
}

// void	del(void *el)
// {
// 	free(el);
// }

// int	main(void)
// {
// 	t_list	*node = ft_lstnew("Node");
// 	t_list	*lst = ft_lstnew("Lst");

// 	ft_lstadd_front(&lst, node);
// 	ft_lstdelone(lst, del);
// 	printf("%s\n", lst->next);
// 	return (0);
// }
