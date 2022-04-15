/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrasi <cterrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 21:22:56 by cterrasi          #+#    #+#             */
/*   Updated: 2022/04/08 15:14:00 by cterrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*p;
	size_t			i;

	p = malloc(count * size);
	if (p && (size <= UINT_MAX || count <= UINT_MAX))
	{
		i = 0;
		while (i < count * size)
			*(p + i++) = '\0';
		return (p);
	}
	return (NULL);
}
