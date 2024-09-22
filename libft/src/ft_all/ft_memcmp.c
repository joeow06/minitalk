/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jow <jow@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 12:20:24 by jow               #+#    #+#             */
/*   Updated: 2024/06/14 10:44:50 by jow              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
#include <string.h>
*/
#include "../../inc/libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	const unsigned char	*s1;
	const unsigned char	*s2;
	size_t				i;

	i = 0;
	s1 = str1;
	s2 = str2;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return ((int)(s1[i] - s2[i]));
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	 char	s1[] = "ABZ123";
	 char	s2[] = "ABD124";

	 int	result = ft_memcmp(s1, s2, sizeof(char) * 6);
	 printf("s1/s2 = %d\n", result);
	return (0);
}
*/
