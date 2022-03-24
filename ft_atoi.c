/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrasi <cterrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 08:48:49 by cterrasi          #+#    #+#             */
/*   Updated: 2022/03/24 09:26:08 by cterrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	long int	num;
	int			sign;

	num = 0;
	sign = 1;
	while (*nptr == ' ' || (*nptr >= '\t' && *nptr <= '\r'))
		nptr++;
	if (*nptr == '-' && (ft_isdigit(*(nptr + 1))))
	{
		if (*nptr == '-')
			sign *= -1;
		nptr++;
	}
	if (*nptr == '+' && (ft_isdigit(*(nptr + 1))))
		nptr++;
	while (ft_isdigit(*nptr))
	{
		num = num * 10 + *nptr - '0';
		if (num * sign < -2147483648)
			return (0);
		else if (num * sign > 2147483647)
			return (-1);
		nptr++;
	}
	return (num * sign);
}

// int	main(void)
// {
// 	/* Probar:
// 	Whitespaces al inicio.
// 	Un neg al inicio.
// 	Un pos al inicio.
// 	Más de dos signos al inicio.
// 	Letras al inicio.
// 	Símbolos al inicio.
// 	Cualquiera de los anteriores en medio de los números.
// 	*/
// 	const char	test[] = "-99999999999999999999999999";
// 	printf("Original: %i\n", atoi(test));
// 	printf("Mine: %i\n", ft_atoi(test));
// 	return (0);
// }
