/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrasi <cterrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 13:58:55 by cterrasi          #+#    #+#             */
/*   Updated: 2022/04/02 18:22:41 by cterrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* -------------------------------------------------------------------------- */
/* Allocate memory with malloc() and return an array of strings with each	  */
/* words of 's'.															  */
/* Every word is delimited by 'c'.											  */
/* Every word in the array, must be nul-terminated with '\0'.				  */
/* -------------------------------------------------------------------------- */

#include "libft.h"

static size_t	ft_count_words(const char *s, char c)
{
	size_t	count;
	int		state;

	count = 0;
	state = 0;
	while (*s)
	{
		if (*s == c)
			state = 0;
		else if (state == 0)
		{
			state = 1;
			count++;
		}
		s++;
	}
	return (count);
}

char	**ft_split(const char *s, char c)
{
	size_t	words;
	char	*strs;
	int		i;

	words = ft_count_words(s, c);
	strs = (char *)malloc(sizeof(char) * words);
	if (!strs)
		return (NULL);
	printf("words: %lu\n", words);
	return ((char **)s);
}

int	main(void)
{
	const char	s[] = "   Clarette Terrasi Diaz ";

	ft_split(s, ' ');
	// printf("split 1: %c\n", s[0]);
	// printf("split 2: %c\n", s[1]);
	// printf("split 3: %c\n", s[2]);
	return (0);
}
