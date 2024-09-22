/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jow <jow@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:41:36 by jow               #+#    #+#             */
/*   Updated: 2024/06/19 15:59:52 by jow              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
#include <string.h>
#include <stdlib.h>
*/
#include "../../inc/libft.h"

static char	*reverse(char *str);
static long	abs_val(long num);
static int	count_digit(long num);
char		*ft_itoa(int n);
/*
int	main(void)
{
	int	number = -2147483648;
	
	char *result_1 = ft_itoa(number);
	printf("result_1: %s\n", result_1);
	printf("result_2: %s\n", ft_itoa(2147483647));
	free(result_1);
	return (0);
}*/

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		sign;
	long	num;

	i = 0;
	num = n;
	sign = 0;
	str = (char *)malloc(sizeof(char) * (count_digit(num) + 1));
	if (!str)
		return (NULL);
	if (num == 0)
		str[i++] = '0';
	if (num < 0)
		sign = 1;
	num = abs_val(num);
	while (num != 0)
	{
		str[i++] = (num % 10) + '0';
		num = num / 10;
	}
	if (sign == 1)
		str[i++] = '-';
	str[i] = '\0';
	return (reverse(str));
}

static long	abs_val(long num)
{
	if (num < 0)
	{
		num *= -1;
		return (num);
	}
	return (num);
}

static char	*reverse(char *str)
{
	int		front;
	int		back;
	char	temp;

	back = 0;
	front = 0;
	while (str[back])
		back++;
	back--;
	while (front < back)
	{
		temp = str[front];
		str[front] = str[back];
		str[back] = temp;
		back--;
		front++;
	}
	return (str);
}

static int	count_digit(long num)
{
	int	digit;

	digit = 0;
	if (num == 0)
		return (1);
	if (num < 0)
	{
		digit++;
		num *= -1;
	}
	while (num != 0)
	{
		num /= 10;
		digit++;
	}
	return (digit);
}
