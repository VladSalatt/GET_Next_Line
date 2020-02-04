/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 17:45:09 by ebulwer           #+#    #+#             */
/*   Updated: 2019/09/18 18:55:22 by ebulwer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	char	*s;
	char	c;
	size_t	pos;

	pos = ft_strlen(str);
	c = (char)ch;
	s = (char *)str + pos;
	while (s >= str)
	{
		if (*s == c)
			return (s);
		s--;
	}
	return (NULL);
}
