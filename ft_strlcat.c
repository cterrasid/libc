/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrasi <cterrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 17:58:20 by cterrasi          #+#    #+#             */
/*   Updated: 2022/03/21 22:08:11 by cterrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (*s++)
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	s_len;
	size_t	d_len;

	d_len = ft_strlen(dst);
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

int	main(void)
{
	char	s[] = "menor";
	char	d[] = "Hola ";
	size_t	size = 4;
	printf("%lu\n", ft_strlcat(d, s, size));
	printf("%s\n", d);
	return (0);
}
