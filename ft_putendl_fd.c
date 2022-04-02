/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrasi <cterrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 02:42:44 by cterrasi          #+#    #+#             */
/*   Updated: 2022/04/02 17:39:54 by cterrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* -------------------------------------------------------------------------- */
/* Writes 's' in the given 'fd' (file descriptor), followed by a linebreak.	  */
/* -------------------------------------------------------------------------- */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

// int	main(void)
// {
// 	char	s[] = "Hola 42";
// 	int fd = 1;
// 	ft_putendl_fd(s, fd);
// 	return (0);
// }