/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 12:52:49 by ebulwer           #+#    #+#             */
/*   Updated: 2019/09/24 14:28:57 by ebulwer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t			ft_lenword(char const *s, unsigned int start, char c)
{
	size_t		i;

	i = 0;
	while (s[start] == c && s[start] != '\0')
		start++;
	if (s[start] != '\0' && s[start] != c)
	{
		while (s[start] != '\0' && s[start] != c)
		{
			i++;
			start++;
		}
	}
	return (i);
}

static size_t			where_is_ptr(char const *s, unsigned int start, char c)
{
	while (s[start] == c && s[start])
		start++;
	if (s[start] != c && s[start])
	{
		while (s[start] != c && s[start])
			start++;
	}
	return (start);
}

static void				*ft_free(char **dest)
{
	size_t		i;

	i = 0;
	while (dest[i])
	{
		ft_memdel((void *)dest[i]);
		i++;
	}
	return (NULL);
}

static size_t			ft_word(char const *s, char c)
{
	size_t		i;
	size_t		z;

	i = 0;
	z = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			z++;
			i++;
		}
		while (s[i] != c && s[i])
			i++;
	}
	return (z);
}

char					**ft_strsplit(char const *s, char c)
{
	size_t		z;
	size_t		word_size;
	size_t		ptr;
	size_t		count_ptr;
	char		**arr;

	if (!s)
		return (NULL);
	z = 0;
	ptr = 0;
	count_ptr = ft_word(s, c);
	if (!(arr = (char **)malloc(sizeof(char *) * (count_ptr + 1))))
		return (NULL);
	while (z < count_ptr)
	{
		word_size = ft_lenword(s, ptr, c);
		ptr = where_is_ptr(s, ptr, c);
		if (!(arr[z] = ft_strsub(s, ptr - word_size, word_size)))
			return (ft_free(arr));
		z++;
	}
	arr[z] = NULL;
	return (arr);
}
