/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jow <jow@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 14:19:49 by jow               #+#    #+#             */
/*   Updated: 2024/06/14 10:43:01 by jow              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
#include <string.h>
*/
#include "../../inc/libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	char c = 'a';
	int z = '1';
	char p = '!';
	printf("Alphabet result: %d\n", ft_isalnum(c));
	printf("Digit result: %d\n", ft_isalnum(z));
	printf("Nonprintable result: %d", ft_isalnum(p));
	return (0);
}
*/
