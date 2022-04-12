/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrasi <cterrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 17:48:31 by cterrasi          #+#    #+#             */
/*   Updated: 2022/04/02 17:36:57 by cterrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int ch, size_t n)
{
	unsigned char	*s;
	unsigned char	*c;

	s = str;
	c = ch;
	while (n--)
		*s++ = c;
	return (str);
}
