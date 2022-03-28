/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrasi <cterrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 08:48:49 by cterrasi          #+#    #+#             */
/*   Updated: 2022/03/28 04:25:37 by cterrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_whitespace(int c)
{
	return (c == ' ' || (c >= '\t' && c <= '\r'));
}

static int  is_int(long int n)
{
    return (!(n > 2147483647 || n < -2147483648));
}

int	ft_atoi(const char *nptr)
{
	long int	num;
	int			sign;

	num = 0;
	sign = 1;
	while (is_whitespace(*nptr))
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
		if (!is_int(num * sign))
			return (0);
		else
			return (-1);
		// if (num * sign < -2147483648)
		// 	return (0);
		// else if (num * sign > 2147483647)
		// 	return (-1);
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
