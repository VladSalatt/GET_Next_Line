/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 16:26:47 by ebulwer           #+#    #+#             */
/*   Updated: 2019/09/18 16:31:34 by ebulwer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *ap, size_t n)
{
	size_t		len;

	len = ft_strlen(dest);
	while (*ap && (n > 0))
	{
		dest[len] = *ap;
		ap++;
		len++;
		n--;
	}
	dest[len] = '\0';
	return (dest);
}
