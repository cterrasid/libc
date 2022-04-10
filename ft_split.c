/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrasi <cterrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 13:58:55 by cterrasi          #+#    #+#             */
/*   Updated: 2022/04/07 13:18:41 by cterrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(const char *str, char delim)
{
	size_t	count;
	int		state;

	count = 0;
	state = 0;
	while (*str)
	{
		if (*str == delim)
			state = 0;
		else if (state == 0)
		{
			state = 1;
			count++;
		}
		str++;
	}
	return (count);
}

static void	*ft_free_memory(unsigned int i, char *str)
{
	while (i)
	{
		free(str[i]);
		i--;
	}
	free(str);
	return (NULL);
}

static char	*ft_get_word(unsigned int i, const char *str, char delim, char **result)
{
	const char	*word;

	word = str;
	while (*word && *word != delim)
		word++;
	result[i] = ft_substr(str, 0, (word - str));
	if (!result[i])
	{
		ft_free_memory(i, result[i]);
		return (NULL);
	}
	return (result[i]);
}

char	**ft_split(const char *str, char delim)
{
	char			**result;
	size_t			words;
	unsigned int	i;

	if (str && delim)
	{
		i = 0;
		words = ft_count_words(str, delim);
		result = (char **)malloc(sizeof(char *) * (words + 1));
		if (!result)
			return (NULL);
		while (i < words)
		{
			while (*str == delim)
				str++;
			if (*str)
				result[i] = ft_get_word(i, str, delim, result);
			while (*str && *str != delim)
				str++;
			i++;
		}
		result[i] = 0;
		return (result);
	}
	return (NULL);
}
