/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 17:00:43 by ebulwer           #+#    #+#             */
/*   Updated: 2019/09/18 17:45:04 by ebulwer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	char		*p;
	char		c;

	c = (char)ch;
	p = (char *)str;
	while (*p)
	{
		if (*p == c)
			return (p);
		p++;
	}
	if (c == '\0')
		return (p);
	return (NULL);
}
