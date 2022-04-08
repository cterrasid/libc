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

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	unsigned int	i;
	size_t			slen;
	size_t			s_in_start_len;
	char			*str;
	char			*ref_str;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	ref_str = (char *)s;
	s_in_start_len = ft_strlen(ref_str + start);
	if (slen < start)
		len = 0;
	if (s_in_start_len < len)
		len = s_in_start_len;
	i = 0;
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	while (len--)
		str[i++] = ref_str[start++];
	str[i] = '\0';
	return (str);
}
