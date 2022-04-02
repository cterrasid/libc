/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrasi <cterrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 19:42:59 by cterrasi          #+#    #+#             */
/*   Updated: 2022/04/02 17:31:17 by cterrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* -------------------------------------------------------------------------- */
/* Checks the first 'n' bytes of the memory area pointed by 's', until find	  */
/* the first occurrence of 'c'.												  */
/* -------------------------------------------------------------------------- */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char s[] = "Clarette";
// 	int	c = 'C';
// 	size_t n = 4;
// 	// printf("Original: %s\n", memchr(s, c, n));
// 	printf("Mine: %s\n", ft_memchr(s, c, n));
// 	// system("leaks a.out");
// 	return (0);
// }