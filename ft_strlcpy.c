/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrasi <cterrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 18:49:21 by cterrasi          #+#    #+#             */
/*   Updated: 2022/03/28 00:16:12 by cterrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	s_len;

	i = 0;
	s_len = ft_strlen(src);
	if (size < 1)
		return (s_len);
	while (src[i] != '\0' && i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (s_len);
}

// int	main(void)
// {
//     char		dest1[50] = "Hola";
//     const char	src1[7] = "Pelota";
//     char		dest2[50] = "Hola";
//     const char	src2[7] = "Pelota";
//     size_t		size = 6;
//     printf("Original: %zu\n", strlcpy(dest1, src1, size));
//     printf("dest: %s\n", dest1);
//     printf("Mine: %zu\n", ft_strlcpy(dest2, src2, size));
//     printf("dest: %s\n", dest2);
	// system("leaks a.out");
//     return (0);
// }