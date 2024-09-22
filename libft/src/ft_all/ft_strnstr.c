/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joeow <joeow@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 11:45:07 by jow               #+#    #+#             */
/*   Updated: 2024/08/12 14:41:11 by joeow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

static int	get_len(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	size_t			needle_len;
	size_t			j;

	i = 0;
	needle_len = get_len(needle);
	if (needle[0] == '\0')
		return ((char *)(haystack));
	while (haystack[i] != '\0' && i + needle_len <= len)
	{
		j = 0;
		while (haystack[i + j] == needle[j])
		{
			if (j == needle_len - 1)
				return ((char *)(haystack + i));
			j++;
		}
		i++;
	}
	return (NULL);
}
/*
	- i + needle_len <= len is to limit search length.
	  for example, if i put 5 as the limit, if i traverse until index(i) 2
	  which is 'l', the loop will stop the next loop cuz 2 + 3(Big) == len(5)
	 - use size_t j cuz there's comparison betwen j and needle_len
	- j == needle_len -1 is to ensure needle matches the haystack.
*/
/*
int main(void)
{
    char    haystack[] = "Hello, Big world!";
    char    needle[] = "Big";
    char    *c;

    c = ft_strnstr(haystack, needle, get_len(haystack));
    printf("%s\n", c);
    return (0);
}
*/
