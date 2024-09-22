/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jow <jow@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 17:58:49 by jow               #+#    #+#             */
/*   Updated: 2024/06/14 10:45:33 by jow              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
#include <string.h>
*/
#include "../../inc/libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = b;
	while (i < len)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
/*
int	main(void)
{
	char	array[11];
	strcpy(array, "HelloHello");

	ft_memset(array, 'a', sizeof(char) * 5);
	for (int i =  0; i < 10; i++)
		printf("%c", array[i]);
	printf("\n");
	return (0);
}
*/
