/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrasi <cterrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:47:02 by cterrasi          #+#    #+#             */
/*   Updated: 2022/03/28 00:16:16 by cterrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

// int	main(void)
// {
// 	int	c = 250;
// 	printf("Mine: %i\n", ft_isascii(c));
// 	// printf("Original: %i\n", isascii(c));
	// system("leaks a.out");
// 	return (0);
// }
