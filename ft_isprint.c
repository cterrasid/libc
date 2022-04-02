/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrasi <cterrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:58:49 by cterrasi          #+#    #+#             */
/*   Updated: 2022/04/02 17:25:12 by cterrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* -------------------------------------------------------------------------- */
/* Checks whether the argument passed is a printable character or not.		  */
/* -------------------------------------------------------------------------- */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= ' ' && c <= '~');
}

// int	main(void)
// {
// 	int	c = 127;
// 	printf("Mine: %i\n", ft_isprint(c));
// 	// printf("Original: %i\n", isprint(c));
	// system("leaks a.out");
// 	return (0);
// }
