/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrasi <cterrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 04:04:09 by cterrasi          #+#    #+#             */
/*   Updated: 2022/03/28 05:55:03 by cterrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	unsigned int	i;
	size_t			s_len;
	char			*str;

	i = 0;
	s_len = ft_strlen(s);
	str = (char *)malloc(sizeof(*s) * len + 1);
	if (!str)
		return (NULL);
	if (s_len < start)
		len = 0;
	if ((s_len + start) < len)
		len = s_len + start;
	while (len--)
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}

// int	main(void)
// {
// 	const char		s[] = "i just want this part #############";
// 	unsigned int	start = 5;
// 	size_t			len = 10;
// 	char			*substr = ft_substr(s, start, len);
// 	printf("%s\n", substr);
// 	free(substr);
// 	// system("leaks a.out");
// 	return (0);
// }
