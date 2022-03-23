/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrasi <cterrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 17:48:31 by cterrasi          #+#    #+#             */
/*   Updated: 2022/03/23 18:21:03 by cterrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	int	i;

	i = 0;
	while (n--)
		((unsigned char *)s)[i++] = (unsigned char)c;
	return (s);
}

// int	main(void)
// {
// 	char	s1[] = "Testing";
// 	char	s2[] = "Testing";
// 	int		c = '*';
// 	size_t	n = 4;
// 	printf("Original: :%s:\n", memset(s1, c, n));
// 	printf("Mine: :%s:\n", ft_memset(s2, c, n));
// 	return (0);
// }