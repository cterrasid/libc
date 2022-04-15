/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrasi <cterrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 20:42:27 by cterrasi          #+#    #+#             */
/*   Updated: 2022/04/02 17:35:50 by cterrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*dst;
	char	*s;

	dst = (char *)dest;
	s = (char *)src;
	if (s < dst)
	{
		dst += len - 1;
		s += len - 1;
		while (len--)
			*dst-- = *s--;
	}
	else
		ft_memcpy(dest, src, len);
	return (dest);
}
