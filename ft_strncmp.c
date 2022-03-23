/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrasi <cterrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 21:05:35 by cterrasi          #+#    #+#             */
/*   Updated: 2022/03/23 18:21:42 by cterrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && (s1[i] == s2[i]) && i < (n - 1))
		i++;
	return (s1[i] - s2[i]);
}

// int    main(void)
// {
// 	size_t	n = 7;
// 	printf("\n\n%s\n\n", "Mi función:");
//     printf("s1 > s2: //pos %i\n", ft_strncmp("Clarette", "Clare", n));
//     printf("s1 > s2 (mins ascii): //pos  %i\n", ft_strncmp("clarette", "Clarette", n));
//     printf("s1 < s2: //neg %i\n", ft_strncmp("Clare", "Clarette", n));
//     printf("s1 == s2: //0 %i\n", ft_strncmp("Clarette", "Clarette", n));

//     printf("\n\n%s\n\n", "Función original:");
// 	printf("s1 > s2: //pos %i\n", strncmp("Clarette", "Clare", n));
//     printf("s1 > s2 (mins ascii): //pos %i\n", strncmp("clarette", "Clarette", n));
//     printf("s1 < s2: //neg %i\n", strncmp("Clare", "Clarette", n));
//     printf("s1 == s2: //0 %i\n", strncmp("Clarette", "Clarette", n));
//     return (0);
// }