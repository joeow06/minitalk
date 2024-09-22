/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jow <jow@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 15:22:16 by jow               #+#    #+#             */
/*   Updated: 2024/06/24 23:04:39 by jow              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../inc/ft_printf.h"

int	ft_puthex(unsigned int n, const char format)
{
	int		i;
	int		j;
	char	*hex_digits;
	char	hex_buffer[17];

	if (format == 'x')
		hex_digits = "0123456789abcdef";
	else if (format == 'X')
		hex_digits = "0123456789ABCDEF";
	i = 0;
	j = 0;
	if (n == 0)
	{
		ft_putstr("0");
		return (1);
	}
	while (n > 0)
	{
		hex_buffer[i++] = hex_digits[n % 16];
		n /= 16;
	}
	j = i;
	while (i > 0)
		ft_putchar(hex_buffer[--i]);
	return (j);
}
