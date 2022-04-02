/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrasi <cterrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 13:36:01 by cterrasi          #+#    #+#             */
/*   Updated: 2022/04/02 18:14:52 by cterrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* -------------------------------------------------------------------------- */
/* Takes a lowercase alphabet and convert it to a uppercase character.		  */
/* -------------------------------------------------------------------------- */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

// int	main(void)
// {
// 	int	c = 'a';
// 	printf("Mine: %i\n", ft_toupper(c));
// 	printf("Original: %i\n", toupper(c));
	// system("leaks a.out");
// 	return (0);
// }
