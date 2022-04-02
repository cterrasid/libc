/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrasi <cterrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 13:12:59 by cterrasi          #+#    #+#             */
/*   Updated: 2022/04/02 16:59:49 by cterrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* -------------------------------------------------------------------------- */
/* Replace 'n' bytes of the string 's', by zeros ('\0').					  */
/* -------------------------------------------------------------------------- */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	int	i;

	i = 0;
	while (n--)
		((unsigned char *)s)[i++] = '\0';
}

// int	main(void)
// {
// 	char	s1[] = "Testing";
// 	char	s2[] = "Testing";
// 	ft_bzero(s1, 4);
// 	// bzero(s2, 4);
// 	printf("Mine: %s\n", s1);
// 	// printf("Original: %s\n", s2);
// 	// system("leaks a.out");
// 	return (0);
// }
