/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 18:55:45 by ebulwer           #+#    #+#             */
/*   Updated: 2019/09/22 17:14:05 by ebulwer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	char			*s11;
	char			*s22;
	unsigned int	i;
	unsigned int	k;

	s11 = (char *)s1;
	s22 = (char *)s2;
	i = 0;
	if (!*s2)
		return ((char *)s1);
	while (s11[i])
	{
		if (s11[i] == s22[0])
		{
			k = 1;
			while (s22[k] && (s22[k] == s11[i + k]))
				k++;
			if (s22[k] == '\0')
				return ((char *)&s11[i]);
		}
		i++;
	}
	return (0);
}
