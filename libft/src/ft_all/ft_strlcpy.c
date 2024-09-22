/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joeow <joeow@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 10:58:33 by jow               #+#    #+#             */
/*   Updated: 2024/08/12 14:44:00 by joeow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

size_t	ft_strlcpy(char	*dest, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	c;

	i = 0;
	c = 0;
	while (src[c])
		c++;
	if (size < 1)
		return (c);
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (c);
}
/*
int main(void)
{
    char    src[] = "Hello,world";
    char    dest[20];
    unsigned int    size;

    size = 11;
    ft_strlcpy(dest, src, size);
    printf("\nInput: %s\n", src);
    printf("Output: %s\n", dest);
    printf("Length of source string: %zu\n\n", ft_strlcpy(dest, src, size));
    return (0);
}
*/
