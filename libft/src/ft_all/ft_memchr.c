/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jow <jow@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 11:25:21 by jow               #+#    #+#             */
/*   Updated: 2024/06/14 10:44:33 by jow              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
#include <string.h>
*/
#include "../../inc/libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t				i;
	const unsigned char	*sub;

	i = 0;
	sub = (const unsigned char *)str;
	while (i < n)
	{
		if ((unsigned char)c == sub[i])
			return ((void *)sub + i);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	email[] = "johnsmith@gmail.com";
	char	*result = ft_memchr(email, '@', strlen(email));
	if (result != NULL)
		printf("Result is : %s\n", result);
	else
		printf("Result not found");
	return (0);
}
*/
