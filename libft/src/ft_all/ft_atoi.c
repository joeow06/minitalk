/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jow <jow@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 13:35:34 by jow               #+#    #+#             */
/*   Updated: 2024/06/18 13:43:11 by jow              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
#include <stdlib.h>*/
#include "../../inc/libft.h"

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}
/*
int	main(int	argc,char	**argv)
{
	if (argc != 2)
	{
		printf("Error");
		return (1);
	}
	int	result = ft_atoi(argv[1]);
	printf("My atoi: %d\n", result);
	int	ori = atoi(argv[1]);
	printf("Original atoi: %d\n", ori);
	return (0);
}
*/
