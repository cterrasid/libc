/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrasi <cterrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 21:22:56 by cterrasi          #+#    #+#             */
/*   Updated: 2022/04/02 17:20:34 by cterrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* -------------------------------------------------------------------------- */
/* Allocates memory for an array of 'count' elements (with 'size'			  */
/* bytes each), and returns a pointer to the allocated memory.				  */
/* Every position of memory is set to zero ('\0').							  */
/* -------------------------------------------------------------------------- */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*p;
	size_t			i;

	p = malloc(count * size);
	if (p != NULL)
	{
		i = 0;
		while (i < count * size)
			*(p + i++) = '\0';
	}
	return (p);
}

// int	main(void)
// {
// 	size_t count = 0;
// 	size_t size = sizeof(int);
// 	void *mine = ft_calloc(count, size);
// 	void *original = calloc(count, size);
// 	printf("Original: %s\n", original);
// 	printf("Mine: %s\n", mine);
// 	free(mine);
// 	free(original);
// 	system("leaks a.out");
// 	return (0);
// }
