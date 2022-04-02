/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrasi <cterrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 16:48:33 by cterrasi          #+#    #+#             */
/*   Updated: 2022/04/02 15:43:18 by cterrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* -------------------------------------------------------------------------- */
/* Loops a list 'lst' and applies the function 'f' to the content of each	  */
/* element.																	  */
/* The 'f' function will create a new list with the content of an element.	  */
/* The 'del' function will remove the content of an element if needed.		  */
/* -------------------------------------------------------------------------- */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
}
