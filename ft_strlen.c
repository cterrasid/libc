/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrasi <cterrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 16:56:48 by cterrasi          #+#    #+#             */
/*   Updated: 2022/04/02 17:59:40 by cterrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* -------------------------------------------------------------------------- */
/* Calcuates the length of a given string 's'.								  */
/* -------------------------------------------------------------------------- */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (*s++)
		i++;
	return (i);
}

// int	main(void)
// {
// 	char	s[] = "Hola";
// 	printf("Original: %lu\n", strlen(s));
// 	printf("Mine: %zu\n", ft_strlen(s));
	// system("leaks a.out");
// 	return (0);
// }
