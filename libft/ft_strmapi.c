/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 17:12:36 by ebulwer           #+#    #+#             */
/*   Updated: 2019/09/21 21:45:07 by ebulwer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*s_old;
	char			*s_new;
	size_t			i;

	if (!s || !f)
		return (NULL);
	i = 0;
	s_old = (char *)s;
	s_new = (char *)malloc(sizeof(char) * (ft_strlen(s_old) + 1));
	if (s_new == NULL)
		return (NULL);
	while (s_old[i])
	{
		s_new[i] = f(i, s_old[i]);
		i++;
	}
	s_new[i] = '\0';
	return (s_new);
}
