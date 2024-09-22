/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jow <jow@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 15:27:15 by jow               #+#    #+#             */
/*   Updated: 2024/09/02 15:12:13 by jow              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../inc/libft.h"

static char		*malloc_substr(char const *s, int start, int len);
static int		subs_len(char const *s, char c);
char			**ft_split(char const *s, char c);

static int	subs_len(char const *s, char c)
{
	int	i;
	int	next;

	i = 0;
	next = 0;
	while (*s)
	{
		if (*s != c && next == 0)
		{
			next = 1;
			i++;
		}
		else if (*s == c)
			next = 0;
		s++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	size_t		i;
	size_t		j;
	int			n;
	char		**array;

	array = malloc(sizeof(char *) * (subs_len(s, c) + 1));
	if (!array)
		return (NULL);
	i = 0;
	j = 0;
	n = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && n < 0)
			n = i;
		else if ((s[i] == c || i == ft_strlen(s)) && n >= 0)
		{
			array[j++] = malloc_substr(s, n, i);
			n = -1;
		}
		i++;
	}
	array[j] = NULL;
	return (array);
}

static char	*malloc_substr(char const *s, int start, int len)
{
	char	*substr;
	int		i;

	i = 0;
	substr = malloc((len - start + 1) * sizeof(char));
	while (start < len)
		substr[i++] = s[start++];
	substr[i] = '\0';
	return (substr);
}
