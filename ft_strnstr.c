/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrasi <cterrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 17:05:08 by cterrasi          #+#    #+#             */
/*   Updated: 2022/04/02 18:05:47 by cterrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* -------------------------------------------------------------------------- */
/* Locates the first occurrence of 'needle' in the first 'len' bytes of		  */
/* 'haystack'. 																  */
/* -------------------------------------------------------------------------- */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	n_len;

	n_len = ft_strlen(needle);
	if (n_len == 0)
		return ((char *)haystack);
	while (*haystack && len >= n_len)
	{
		if (*haystack == *needle && ft_memcmp(haystack, needle, n_len) == 0)
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char haystack[] = "aaabcabcd";
// 	const char needle[] = "cd";
// 	size_t len = 8;
// 	printf("strnstr: %s\n", ft_strnstr(haystack, needle, len));
// 	printf("strnstr: %d\n", strnstr(haystack, needle, len));
// 	printf("memcmp: %d\n", ft_memcmp(haystack, needle, 2));
// 	printf("strncmp: %d\n", ft_strncmp(haystack, needle, 2));
	// system("leaks a.out");
// 	return (0);
// }
