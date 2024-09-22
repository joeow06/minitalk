/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jow <jow@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 15:25:13 by jow               #+#    #+#             */
/*   Updated: 2024/06/19 16:16:33 by jow              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>
*/
#include "../../inc/libft.h"

char	*ft_strchr(const char *str, int c)
{
	unsigned int	i;
	char			chr;

	chr = (char) c;
	i = 0;
	while (str[i])
	{
		if (chr == str[i])
			return ((char *)(&str[i]));
		i++;
	}
	if (str[i] == chr)
		return ((char *)(&str[i]));
	return (NULL);
}
/*
int	main(void)
{
	printf("%s\n", ft_strchr("teste", 1024));
	printf("%s\n", strchr("teste", 1024));
	return (0);
}
*/
