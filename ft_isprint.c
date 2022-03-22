/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrasi <cterrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:58:49 by cterrasi          #+#    #+#             */
/*   Updated: 2022/03/21 13:35:13 by cterrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isprint(int c)
{
	return (c > ' ' && c <= '~');
}

int	main(void)
{
	int	c = 127;
	printf("Mine: %i\n", ft_isprint(c));
	printf("Original: %i\n", isprint(c));
	return (0);
}
