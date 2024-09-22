/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jow <jow@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 14:06:37 by jow               #+#    #+#             */
/*   Updated: 2024/06/14 12:36:56 by jow              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
#include <stdlib.h>
*/
#include "../../inc/libft.h"

char	*ft_strdup(const char *s1)
{
	char	*res;
	int		i;

	i = 0;
	res = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (!res)
		return (NULL);
	while (s1[i])
	{
		res[i] = s1[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
/*
	if (!(res.... --> if fail to allocate memory, return NULL
	cuz if malloc fails, it returns false and with !, the if 
	loop will run.

*/
/*
int	main(void)
{
	char	*array1 = "Hello";

	if (ft_strdup(array1))
        printf("ft_strdup: %s\n", ft_strdup(array1));
    else
        printf("ft_strdup: Memory allocation failed\n");
    if (strdup(array1))
        printf("strdup: %s\n", strdup(array1));
    else
        printf("strdup: Memory allocation failed\n");
    return (0);
}
*/
