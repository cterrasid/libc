/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrasi <cterrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 08:48:49 by cterrasi          #+#    #+#             */
/*   Updated: 2022/03/23 14:56:08 by cterrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	num;
	int	sign;

	i = 0;
	num = 0;
	sign = 1;
	while (*nptr == ' ' || (*nptr >= '\t' && *nptr <= '\r'))
		nptr++;
	if (*nptr == '-' && (*(nptr + 1) >= '0' && *(nptr + 1) <= '9'))
	{
		if (*nptr == '-')
			sign *= -1;
		nptr++;
	}
	if (*nptr == '+' && (*(nptr + 1) >= '0' && *(nptr + 1) <= '9'))
		nptr++;
	while (*nptr >= '0' && *nptr <= '9')
	{
		num = num * 10 + *nptr - '0';
		nptr++;
	}
	return (num * sign);
}

int	main(void)
{
	/* Probar:
	Whitespaces al inicio.
	Un neg al inicio.
	Un pos al inicio.
	Más de dos signos al inicio.
	Letras al inicio.
	Símbolos al inicio.
	Cualquiera de los anteriores en medio de los números.
	*/
	const char	test[] = "		456";
	printf("Original: %i\n", atoi(test));
	printf("Mine: %i\n", ft_atoi(test));
	return (0);
}