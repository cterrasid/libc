/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrasi <cterrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 11:50:20 by cterrasi          #+#    #+#             */
/*   Updated: 2022/04/02 17:28:45 by cterrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* -------------------------------------------------------------------------- */
/* Allocates memory with malloc() and returns the number 'n' as a string.	  */
/* -------------------------------------------------------------------------- */

#include "libft.h"

static size_t	ft_nbrlen(int n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		len = 1;
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	while (n != 0)
	{
		(n /= 10);
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	size_t		nlen;
	char		*nstr;
	long int	nbr;

	nlen = ft_nbrlen(n);
	nbr = n;
	nstr = (char *)malloc(sizeof(char) * (nlen + 1));
	if (!nstr)
		return (NULL);
	nstr[nlen--] = '\0';
	if (nbr == 0)
		nstr[nlen] = '0';
	if (nbr < 0)
	{
		nstr[0] = '-';
		nbr *= -1;
	}
	while (nbr > 0)
	{
		nstr[nlen--] = '0' + (nbr % 10);
		nbr /= 10;
	}
	return (nstr);
}

// int	main(void)
// {
// 	printf("itoa: %s\n", ft_itoa(-0));
// 	// printf("itoa: %s\n", ft_itoa(-623));
// 	// printf("itoa: %s\n", ft_itoa(156));
// 	// system("leaks a.out");
// 	return (0);
// }
