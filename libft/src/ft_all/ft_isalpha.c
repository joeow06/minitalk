/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jow <jow@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 10:42:33 by jow               #+#    #+#             */
/*   Updated: 2024/06/14 10:43:17 by jow              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
#include <string.h>
*/
#include "../../inc/libft.h"

int	ft_isalpha(int c)
{
	if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')))
		return (0);
	else
		return (1);
}
/*
int	main(void)
{
	char a = ';';
	printf("Result is %d", ft_isalpha(a));
	return (0);
}
*/
