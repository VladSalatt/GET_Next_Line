/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 17:50:21 by ebulwer           #+#    #+#             */
/*   Updated: 2019/09/21 17:58:08 by ebulwer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s_new;
	size_t	i;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	s_new = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (s_new == NULL)
		return (NULL);
	while (*s1)
	{
		s_new[i] = *s1;
		i++;
		s1++;
	}
	while (*s2)
	{
		s_new[i] = *s2;
		s2++;
		i++;
	}
	s_new[i] = '\0';
	return (s_new);
}
