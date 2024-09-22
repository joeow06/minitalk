/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jow <jow@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 14:13:28 by jow               #+#    #+#             */
/*   Updated: 2024/06/27 12:29:36 by jow              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../inc/ft_printf.h"

static int	get_num_length(unsigned int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static char	*ft_itoa(unsigned int n)
{
	int		len;
	char	*str;

	len = get_num_length(n);
	str = (char *)malloc(len);
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (len--)
	{
		str[len] = n % 10 + '0';
		n /= 10;
	}
	return (str);
}

int	ft_putunbr(unsigned int nb)
{
	char	*num;
	int		i;

	num = ft_itoa(nb);
	if (!num)
		return (0);
	i = ft_putstr(num);
	free(num);
	return (i);
}
