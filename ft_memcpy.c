/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrasi <cterrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 18:33:39 by cterrasi          #+#    #+#             */
/*   Updated: 2022/03/23 14:56:54 by cterrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int	i;

	i = 0;
	while (n--)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

int	main(void)
{
	char	dest1[] = "Testing";
	char	src1[] = "Mango";
	char	dest2[] = "Testing";
	char	src2[] = "Mango";
	size_t	n = 4;
	printf("Original: :%s:\n", memcpy(dest1, src1, n));
	printf("Mine: :%s:\n", ft_memcpy(dest2, src2, n));
	return (0);
}