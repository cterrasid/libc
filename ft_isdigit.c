/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrasi <cterrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:34:27 by cterrasi          #+#    #+#             */
/*   Updated: 2022/03/21 12:40:09 by cterrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

int	main(void)
{
	printf("Mine: %i\n", ft_isdigit('a'));
	printf("Original: %i\n", isdigit('a'));
	printf("Mine: %i\n", ft_isdigit('1'));
	printf("Original: %i\n", isdigit('1'));
	printf("Mine: %i\n", ft_isdigit('&'));
	printf("Original: %i\n", isdigit('&'));
	return (0);
}
