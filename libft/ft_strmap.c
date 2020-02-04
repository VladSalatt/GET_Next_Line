/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 16:53:29 by ebulwer           #+#    #+#             */
/*   Updated: 2019/09/21 17:12:16 by ebulwer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*s_old;
	char	*s_new;
	size_t	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	s_old = (char *)s;
	s_new = (char *)malloc(sizeof(char) * (ft_strlen(s_old) + 1));
	if (s_new == NULL)
		return (NULL);
	while (s_old[i])
	{
		s_new[i] = f(s_old[i]);
		i++;
	}
	s_new[i] = '\0';
	return (s_new);
}
