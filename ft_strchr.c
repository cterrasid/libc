/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrasi <cterrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 07:37:49 by cterrasi          #+#    #+#             */
/*   Updated: 2022/04/02 17:42:27 by cterrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* -------------------------------------------------------------------------- */
/* Loops through the string 's' to find the	first occurrence of 'c'.		  */
/* Returns a pointer to the character 'c'.									  */
/* -------------------------------------------------------------------------- */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}

// int	main(void)
// {
// 	const char	s[] = "clarette";
// 	int	c = 'c' + 256;
// 	printf("%d\n", c);
// 	// printf("Original: %s\n", strchr(s, c));
// 	printf("Mine: %s\n", ft_strchr(s, c));
// 	system("leaks a.out");
// 	return (0);
// }
