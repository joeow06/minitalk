/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joeow <joeow@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 18:34:00 by jow               #+#    #+#             */
/*   Updated: 2024/08/12 14:40:43 by joeow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../inc/libft.h"
/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
void	my_toupper(unsigned int i, char *c)
{
	*c = toupper(*c);
}*/

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (s && f)
	{
		i = 0;
		while (*s)
			f(i++, s++);
	}
}
/*
int	main(void)
{
	char str[] = "Hello, world";
	ft_striteri(str, my_toupper);
	printf("%s\n", str);
	return (0);
}*/
