/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrasi <cterrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 18:33:39 by cterrasi          #+#    #+#             */
/*   Updated: 2022/04/02 17:34:40 by cterrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* -------------------------------------------------------------------------- */
/* Copies 'n' bytes of the memory area pointed by 'src', to the memory area   */
/* pointed by 'dest'.													      */
/* -------------------------------------------------------------------------- */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int	i;

	i = 0;
	if ((dest == '\0' && src == '\0') || !n)
		return (dest);
	while (n--)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	// char	dest1[5] = "\0";
// 	// char	src1[5] = "\0";
// 	char	dest2[] = "\0";
// 	char	src2[] = "\0";
// 	size_t	n = 0;
// 	// printf("Original: :%s:\n", memcpy(dest1, src1, n));
// 	printf("Mine: :%s:\n", ft_memcpy(dest2, src2, n));
// 	system("leaks a.out");
// 	return (0);
// }