/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joeow <joeow@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 17:32:53 by jow               #+#    #+#             */
/*   Updated: 2024/08/12 14:45:18 by joeow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	first;
	size_t	last;
	char	*str;

	str = 0;
	first = 0;
	last = ft_strlen(s1);
	if (s1 != 0 && set != 0)
	{
		while (s1[first] && ft_strchr(set, s1[first]))
			first++;
		while (last > first && ft_strchr(set, s1[last - 1]))
			last--;
		str = (char *)malloc(sizeof(char) * (last - first + 1));
		if (str)
			ft_strlcpy(str, &s1[first], last - first + 1);
	}
	return (str);
}
