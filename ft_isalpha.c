/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrasi <cterrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:23:39 by cterrasi          #+#    #+#             */
/*   Updated: 2022/03/21 12:39:37 by cterrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isalpha(char c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

int	main(void)
{
	printf("Mine: %i\n", ft_isalpha('a'));
	printf("Original: %i\n", isalpha('a'));
	printf("Mine: %i\n", ft_isalpha('E'));
	printf("Original: %i\n", isalpha('E'));
	printf("Mine: %i\n", ft_isalpha('1'));
	printf("Original: %i\n", isalpha('1'));
	printf("Mine: %i\n", ft_isalpha('&'));
	printf("Original: %i\n", isalpha('&'));
	return (0);
}
