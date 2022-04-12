/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrasi <cterrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 21:35:59 by cterrasi          #+#    #+#             */
/*   Updated: 2022/04/08 18:08:30 by cterrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *str, char (*func)(unsigned int, char))
{
	char			*s;
	unsigned int	i;

	if (str && func)
	{
		s = (char *)malloc(sizeof(char) * ft_strlen(str) + 1);
		if (!s)
			return (NULL);
		i = 0;
		while (str[i])
		{
			s[i] = func(i, str[i]);
			i++;
		}
		s[i] = '\0';
		return (s);
	}
	return (NULL);
}
