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

/* -------------------------------------------------------------------------- */
/* Copies 'n' bytes of the memory area pointed by 'src', to the memory area	  */
/* pointed by 'dest'.														  */
/* -------------------------------------------------------------------------- */

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

// int	main(void)
// {
// 	// char	dest1[] = "Testing";
// 	// char	src1[] = "Mango";
// 	char	dest2[] = "Testing";
// 	char	src2[] = "Mango";
// 	size_t	n = 5;
// 	// printf("Original: :%s:\n", memmove(dest1, src1, n));
// 	printf("Mine: :%s:\n", ft_memmove(dest2, src2, n));
// 	// system("leaks a.out");
// 	return (0);
// }
