/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrasi <cterrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:39:58 by cterrasi          #+#    #+#             */
/*   Updated: 2022/03/28 00:53:19 by cterrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

// int	main(void)
// {
// 	int	c = 'a';
// 	printf("Mine: %i\n", ft_isalnum(c));
// 	// printf("Original: %i\n", isalnum(c));
// 	// system("leaks a.out");
// 	return (0);
// }
