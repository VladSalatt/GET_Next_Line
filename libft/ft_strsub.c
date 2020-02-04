/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 17:19:33 by ebulwer           #+#    #+#             */
/*   Updated: 2019/09/21 18:00:00 by ebulwer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*s_new;
	unsigned int	i;
	unsigned int	k;

	if (!s)
		return (NULL);
	i = start;
	k = 1;
	while (s[i++])
	{
		k++;
	}
	i = 0;
	if (k < len)
		return (NULL);
	s_new = (char *)malloc(sizeof(char) * (len + 1));
	if (s_new == NULL)
		return (NULL);
	while (len--)
	{
		s_new[i++] = s[start++];
	}
	s_new[i] = '\0';
	return (s_new);
}
