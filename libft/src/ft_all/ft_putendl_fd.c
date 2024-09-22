/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jow <jow@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 20:13:14 by jow               #+#    #+#             */
/*   Updated: 2024/06/14 12:48:57 by jow              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <unistd.h>*/
#include "../../inc/libft.h"

size_t	ft_strlen(const char *str);

void	ft_putendl_fd(char *s, int fd)
{
	if (s)
	{
		write(fd, s, ft_strlen(s));
		write(fd, "\n", 1);
	}
}
/*
int	main(void)
{
	char	*str = "Hello, world";
	ft_putendl_fd(str, 1);
	return (0);
}
*/
