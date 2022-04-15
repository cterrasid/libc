/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrasi <cterrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 20:31:36 by cterrasi          #+#    #+#             */
/*   Updated: 2022/04/02 17:45:40 by cterrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*d;
	size_t	len;

	len = ft_strlen(s);
	d = (char *)malloc(sizeof(char) * len + 1);
	if (d == NULL)
		return (NULL);
	ft_memcpy(d, s, len);
	d[len] = '\0';
	return (d);
}
