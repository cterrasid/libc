/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrasi <cterrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 11:53:00 by cterrasi          #+#    #+#             */
/*   Updated: 2022/04/02 17:51:44 by cterrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* -------------------------------------------------------------------------- */
/* Allocates memory with malloc() to create a new string, based on the join	  */
/* of 's1' and 's2'.														  */
/* -------------------------------------------------------------------------- */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	len;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = (char *)malloc(sizeof(char) * len);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1, len);
	ft_strlcat(str, s2, len);
	return (str);
}

// int main(void)
// {
//     char    s1[] = "Hola";
//     char    s2[] = "Pelota";
//     char    *join = ft_strjoin(s1, s2);
//     printf("%s\n", join);
//     printf("%ld\n", sizeof(s1));
//     printf("%ld\n", sizeof(s2));
//     printf("%ld\n", sizeof(join));
// 	// system("leaks a.out");
//     return (0);
// }