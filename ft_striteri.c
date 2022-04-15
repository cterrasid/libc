/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrasi <cterrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 11:02:40 by cterrasi          #+#    #+#             */
/*   Updated: 2022/04/02 17:49:31 by cterrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* -------------------------------------------------------------------------- */
/* Applies the function 'f' to each character of 's'. The first argument of	  */
/* 'f', is the index of each character of 's'.								  */
/* -------------------------------------------------------------------------- */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// void *test(unsigned int i, char * s) {
// 	*s += i;
// }

// int main(void)
// {
// 	 char	s[] = "Caracol";
// 	 ft_striteri(s, test);
// 	 printf("%s\n", s);
// 	 return (0);
// }
