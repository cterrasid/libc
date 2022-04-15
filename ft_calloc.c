/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrasi <cterrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 21:22:56 by cterrasi          #+#    #+#             */
/*   Updated: 2022/04/02 17:20:34 by cterrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*mem;
	size_t			i;

	mem = malloc(count * size);
	if (mem != NULL)
	{
		i = 0;
		while (i < count * size)
			*(mem + i++) = '\0';
	}
	return (mem);
}
