/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrasi <cterrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 22:27:43 by cterrasi          #+#    #+#             */
/*   Updated: 2022/04/02 17:33:04 by cterrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* -------------------------------------------------------------------------- */
/* Compare the first 'n' bytes of the memory areas 's1' and 's2'.			  */
/* -------------------------------------------------------------------------- */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*str1;
	const unsigned char	*str2;

	i = 0;
	str1 = s1;
	str2 = s2;
	while (n--)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

// int    main(void)
// {
// 	size_t	n = 7;
// 	printf("\n\n%s\n\n", "Mi función:");
//     printf("s1 > s2: //pos %i\n", ft_memcmp("Clarette", "Clare", n));
//     printf("s1 < s2: //neg %i\n", ft_memcmp("Clare", "Clarette", n));
//     printf("s1 == s2: //0 %i\n", ft_memcmp("Clarette", "Clarette", n));

//     // printf("\n\n%s\n\n", "Función original:");
// 	// printf("s1 > s2: //pos %i\n", memcmp("Clarette", "Clare", n));
//     // printf("s1 < s2: //neg %i\n", memcmp("Clare", "Clarette", n));
//     // printf("s1 == s2: //0 %i\n", memcmp("Clarette", "Clarette", n));
// 	// system("leaks a.out");
//     return (0);
// }