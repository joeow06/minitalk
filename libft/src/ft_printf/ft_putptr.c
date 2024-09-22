/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jow <jow@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 15:22:16 by jow               #+#    #+#             */
/*   Updated: 2024/06/21 16:04:00 by jow              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../inc/ft_printf.h"

int	ft_putptr(unsigned long long n)
{
	int		i;
	int		j;
	char	*hex_digits;
	char	hex_buffer[17];

	hex_digits = "0123456789abcdef";
	i = 0;
	j = 0;
	if (n == 0)
	{
		ft_putstr("0x0");
		return (3);
	}
	while (n > 0)
	{
		hex_buffer[i++] = hex_digits[n % 16];
		n /= 16;
	}
	ft_putstr("0x");
	while (i > 0)
	{
		ft_putchar(hex_buffer[--i]);
		j++;
	}
	return (j + 2);
}
