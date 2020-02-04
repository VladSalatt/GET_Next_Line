/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 17:15:15 by ebulwer           #+#    #+#             */
/*   Updated: 2019/09/22 17:25:28 by ebulwer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	p;
	size_t	i;

	p = 0;
	if (!*s2)
		return ((char *)s1);
	while (s1[p] && p < len)
	{
		if (s1[p] == s2[0])
		{
			i = 0;
			while (s2[i] && s1[p + i] == s2[i] && p + i < len)
				i++;
			if (s2[i] == '\0')
				return ((char *)&s1[p]);
		}
		p++;
	}
	return (0);
}
