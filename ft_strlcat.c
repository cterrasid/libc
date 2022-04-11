/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrasi <cterrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 17:58:20 by cterrasi          #+#    #+#             */
/*   Updated: 2022/04/02 17:56:42 by cterrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	slen;
	size_t	dlen;

	dlen = ft_strlen((const char *)dst);
	slen = ft_strlen(src);
	if (dstsize <= dlen)
		return (slen + dstsize);
	ft_memcpy(dst + dlen, src, dstsize - dlen);
	dst[dstsize] = '\0';
	return (dlen + slen);
}

int main(void)
{
    char    dest1[50] = "Hola";
    char    src1[7] = "Pelota";
    size_t  size = 10;
    printf("ft_strlcat: %lu\n", ft_strlcat(dest1, src1, size));
    printf("dest: %s\n", dest1);
    return (0);
}
