/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jow <jow@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 12:14:07 by jow               #+#    #+#             */
/*   Updated: 2024/06/27 13:31:54 by jow              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../inc/ft_printf.h"

int	check_format(va_list args, const char format)
{
	int	printf_len;

	printf_len = 0;
	if (format == 'c')
		printf_len += ft_putchar(va_arg(args, int));
	else if (format == 's')
		printf_len += ft_putstr(va_arg(args, char *));
	else if (format == 'p')
		printf_len += ft_putptr(va_arg(args, unsigned long long));
	else if (format == 'd')
		printf_len += ft_putnbr(va_arg(args, int));
	else if (format == 'i')
		printf_len += ft_putnbr(va_arg(args, int));
	else if (format == 'u')
		printf_len += ft_putunbr(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		printf_len += ft_puthex(va_arg(args, int), format);
	else if (format == '%')
		printf_len += ft_putchar('%');
	return (printf_len);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		printf_len;
	va_list	args;

	va_start(args, str);
	i = 0;
	printf_len = 0;
	while (str[i])
	{
		if (str[i] == '%')
			printf_len += check_format(args, str[++i]);
		else
			printf_len += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (printf_len);
}
