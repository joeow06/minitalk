/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jow <jow@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 13:18:34 by jow               #+#    #+#             */
/*   Updated: 2024/06/14 15:12:16 by jow              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../inc/libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*res;

	if (size && count && UINT_MAX / count < size)
		return (NULL);
	res = malloc(size * count);
	if (!res)
		return (NULL);
	ft_bzero(res, (count * size));
	return (res);
}
