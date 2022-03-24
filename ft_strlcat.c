/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrasi <cterrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 17:58:20 by cterrasi          #+#    #+#             */
/*   Updated: 2022/03/24 18:27:46 by cterrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	s_len;
	size_t	d_len;

	d_len = ft_strlen((const char *)dst);
	s_len = ft_strlen(src);
	i = 0;
	j = d_len;
	if (size <= d_len)
		return (s_len + size);
	while (src[i] && i < size - d_len - 1)
		dst[j++] = src[i++];
	dst[j] = '\0';
	return (d_len + s_len);
}

// int main(void)
// {
//     char    dest1[50] = "Hola";
//     char    src1[7] = "Pelota";
//     char    dest2[50] = "Hola";
//     char    src2[7] = "Pelota";
//     size_t  size = 8;
//     printf("Original: %zu\n", ft_strlcat(dest1, src1, size));
//     printf("dest: %s\n", dest1);
//     printf("Mine: %zu\n", strlcat(dest2, src2, size));
//     printf("dest: %s\n", dest2);
//     return (0);
// }
