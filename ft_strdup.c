/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrasi <cterrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 20:31:36 by cterrasi          #+#    #+#             */
/*   Updated: 2022/04/02 17:45:40 by cterrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* -------------------------------------------------------------------------- */
/* Returns a pointer to a null-terminated byte string, which is a duplicate	  */
/* of the string pointed by 's'.											  */
/* The memory obtained  is done dynamically using malloc().					  */
/* -------------------------------------------------------------------------- */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*d;
	size_t	len;

	len = ft_strlen(s);
	d = (char *)malloc(sizeof(char) * len + 1);
	if (d == NULL)
		return (NULL);
	ft_memcpy(d, s, len);
	d[len] = '\0';
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
