/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrasi <cterrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:47:02 by cterrasi          #+#    #+#             */
/*   Updated: 2022/03/21 13:28:35 by cterrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

int	main(void)
{
	int	c = 250;
	printf("Mine: %i\n", ft_isascii(c));
	printf("Original: %i\n", isascii(c));
	return (0);
}
