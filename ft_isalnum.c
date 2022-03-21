/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrasi <cterrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:39:58 by cterrasi          #+#    #+#             */
/*   Updated: 2022/03/21 12:43:03 by cterrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isalpha(char c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

int	ft_isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_isalnum(char c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

int	main(void)
{
	printf("Mine: %i\n", ft_isalnum('a'));
	printf("Original: %i\n", isalnum('a'));
	printf("Mine: %i\n", ft_isalnum('1'));
	printf("Original: %i\n", isalnum('1'));
	printf("Mine: %i\n", ft_isalnum('&'));
	printf("Original: %i\n", isalnum('&'));
	return (0);
}
