/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrasi <cterrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 17:00:23 by cterrasi          #+#    #+#             */
/*   Updated: 2022/04/02 18:07:24 by cterrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* -------------------------------------------------------------------------- */
/* Loops through the string 's' to find the	last occurrence of 'c'.			  */
/* Returns a pointer to the character 'c'.									  */
/* -------------------------------------------------------------------------- */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	s_len;

	s_len = ft_strlen(s);
	s += s_len;
	if (c == '\0')
		return ((char *)(s));
	while (s_len--)
	{
		s--;
		if (*s == (char)c)
			return ((char *)(s));
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char	s[] = "clarette";
// 	int	c = '\0';
// 	printf("Original: %s\n", strrchr(s, c));
// 	printf("Mine: %s\n", ft_strrchr(s, c));
	// system("leaks a.out");
// 	return (0);
// }