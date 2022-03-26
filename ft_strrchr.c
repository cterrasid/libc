/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrasi <cterrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 17:00:23 by cterrasi          #+#    #+#             */
/*   Updated: 2022/03/26 19:29:21 by cterrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <string.h>
// #include <stdio.h>

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
// 	return (0);
// }