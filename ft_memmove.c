/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrasi <cterrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 20:42:27 by cterrasi          #+#    #+#             */
/*   Updated: 2022/03/22 21:04:02 by cterrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int				i;
	unsigned char	*aux;

	i = 0;
	while (n--)
	{
		aux = ((unsigned char *)src);
		((unsigned char *)dest)[i] = aux[i];
		i++;
	}
	return (dest);
}

int	main(void)
{
	char	dest1[] = "Testing";
	char	dest2[] = "Testing";
	char	src1[] = "Mango";
	char	src2[] = "Mango";
	size_t	n = 5;
	printf("Original: :%s:\n", memmove(dest1, src1, n));
	printf("Mine: :%s:\n", ft_memmove(dest2, src2, n));
	return (0);
}