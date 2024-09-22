/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jow <jow@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 13:12:17 by jow               #+#    #+#             */
/*   Updated: 2024/06/14 10:43:42 by jow              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
#include <string.h>
*/
#include "../../inc/libft.h"

int	ft_isdigit(int c)
{
	if (!(c >= 48 && c <= 57))
		return (0);
	else
		return (1);
}
/*
int	main(void)
{
	char c = '1';
	printf("Result is %d", ft_isdigit(c));
	return (0);
}
*/
