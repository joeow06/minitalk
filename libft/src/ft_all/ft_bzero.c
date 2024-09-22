/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jow <jow@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 11:03:35 by jow               #+#    #+#             */
/*   Updated: 2024/06/14 10:40:46 by jow              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
#include <string.h>
*/
#include "../../inc/libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = s;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}
/*
int	main(void)
{
	char	array[11];
	strcpy(array, "HelloHello");

	ft_bzero(array, sizeof(char) * 5);
	for (int i =  0; i < 11; i++)
		printf("%c", array[i]);
	printf("\n");
	return (0);
}
*/
