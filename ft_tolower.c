/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrasi <cterrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 16:43:08 by cterrasi          #+#    #+#             */
/*   Updated: 2022/03/28 00:16:08 by cterrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

// int	main(void)
// {
// 	int	c = 'a';
// 	printf("Mine: %i\n", ft_tolower(c));
// 	printf("Original: %i\n", tolower(c));
	// system("leaks a.out");
// 	return (0);
// }
