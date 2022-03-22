/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrasi <cterrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 16:56:48 by cterrasi          #+#    #+#             */
/*   Updated: 2022/03/22 20:06:55 by cterrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	while (*s++)
		i++;
	return (i);
}

int	main(void)
{
	char	s[] = "Hola";
	printf("Original: %lu\n", strlen(s));
	printf("Mine: %zu\n", ft_strlen(s));
	return (0);
}
