/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrasi <cterrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 04:04:09 by cterrasi          #+#    #+#             */
/*   Updated: 2022/04/08 18:16:19 by cterrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *str, unsigned int start, size_t max_len)
{
	unsigned int	i;
	size_t			len;
	size_t			substr_len;
	char			*substring;

	if (str)
	{
		i = 0;
		len = ft_strlen(str);
		substr_len = ft_strlen(str + start);
		substring = (char *)malloc(sizeof(char) * len + 1);
		if (!substring)
			return (NULL);
		if (start > len)
			max_len = 0;
		if (substr_len < max_len)
			max_len = substr_len;
		while (i < max_len)
			substring[i++] = str[start++];
		substring[i] = '\0';
		return (substring);
	}
	return (NULL);
}
