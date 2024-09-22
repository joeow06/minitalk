/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joeow <joeow@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 16:56:47 by jow               #+#    #+#             */
/*   Updated: 2024/08/12 14:43:33 by joeow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"
/*
#include <string.h>
#include <ctype.h>
char	toupper_if_even(unsigned int i, char c)
{
	if (i % 2 == 0)
		return (toupper(c));
	else
		return (c);
}
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	i = 0;
	str = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
int	main(void)
{
	char *str = "Hello, world";
	char *result = ft_strmapi(str, toupper_if_even);
	printf("%s\n", result);
	free(result);
	return (0);
}*/
