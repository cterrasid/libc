/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrasi <cterrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 08:48:49 by cterrasi          #+#    #+#             */
/*   Updated: 2022/04/02 16:58:39 by cterrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* -------------------------------------------------------------------------- */
/* Transform the first numeric characters of a string 'nptr' in numbers.	  */
/* -------------------------------------------------------------------------- */

#include "libft.h"

static int	is_whitespace(int c)
{
	return (c == ' ' || (c >= '\t' && c <= '\r'));
}

int	ft_atoi(const char *nptr)
{
	long int	num;
	int			sign;

	num = 0;
	sign = 1;
	while (is_whitespace(*nptr))
		nptr++;
	if (*nptr == '-')
		sign *= -1;
	if (*nptr == '-' || *nptr == '+')
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
// 	const char	test[] = "-99999999999999999999999999";
// 	printf("Original: %i\n", atoi(test));
// 	printf("Mine: %i\n", ft_atoi(test));
// 	return (0);
// }
