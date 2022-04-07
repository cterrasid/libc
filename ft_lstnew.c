/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrasi <cterrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 16:47:11 by cterrasi          #+#    #+#             */
/*   Updated: 2022/04/06 20:21:03 by cterrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* -------------------------------------------------------------------------- */
/* Reserve memory with malloc() nd return a new element.					  */
/* The new element's content is initialized with the parameter 'content'.	  */
/* -------------------------------------------------------------------------- */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (node)
	{
		node->content = content;
		node->next = NULL;
		return (node);
	}
	return (NULL);
}

// int	main(void)
// {
// 	t_list	*node;

// 	node = ft_lstnew("Dede");
// 	printf("%s\n", node->content);
// 	return (0);
// }
