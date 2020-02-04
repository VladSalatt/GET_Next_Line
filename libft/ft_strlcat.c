/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 16:46:35 by ebulwer           #+#    #+#             */
/*   Updated: 2019/09/22 16:32:16 by ebulwer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	len;
	size_t	i;
	size_t	k;

	k = 0;
	len = 0;
	i = 0;
	while (dest[len])
		len++;
	while (src[i])
		i++;
	if (n <= len)
		i = i + n;
	else
		i = i + len;
	while (src[k] && len + 1 < n)
	{
		dest[len] = src[k];
		k++;
		len++;
	}
	dest[len] = '\0';
	return (i);
}
