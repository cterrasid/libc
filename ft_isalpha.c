/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrasi <cterrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:23:39 by cterrasi          #+#    #+#             */
/*   Updated: 2022/04/02 17:22:34 by cterrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* -------------------------------------------------------------------------- */
/* Checks whether the argument passed is an alphabetic character or not.	  */
/* -------------------------------------------------------------------------- */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

// int	main(void)
// {
// 	int	c = 'A';
// 	printf("Mine: %i\n", ft_isalpha(c));
// 	// printf("Original: %i\n", isalpha(c));
	// system("leaks a.out");
// 	return (0);
// }
