/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrasi <cterrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:34:27 by cterrasi          #+#    #+#             */
/*   Updated: 2022/03/28 00:16:17 by cterrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

// int	main(void)
// {
// 	int	c = '1';
// 	printf("Mine: %i\n", ft_isdigit(c));
// 	// printf("Original: %i\n", isdigit(c));
	// system("leaks a.out");
// 	return (0);
// }
