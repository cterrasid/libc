/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrasi <cterrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 20:31:36 by cterrasi          #+#    #+#             */
/*   Updated: 2022/03/28 02:03:34 by cterrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*d;
	size_t	s_len;

	s_len = ft_strlen(s);
	d = (char *)malloc(sizeof(char) * s_len + 1);
	if (d == NULL)
		return (NULL);
	ft_memcpy(d, s, s_len);
	d[s_len] = '\0';
	return (d);
}

// int	main(void)
// {
// 	const char 	s[] = "Caramba";
// 	char	*mine = ft_strdup(s);
// 	char	*original = strdup(s);
// 	printf("Original: %s\n", original);
// 	printf("Mine: %s\n", mine);
// 	system("leaks a.out");
// 	return (0);
// }
