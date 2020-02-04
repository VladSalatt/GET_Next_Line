/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 16:14:20 by ebulwer           #+#    #+#             */
/*   Updated: 2019/09/18 16:26:35 by ebulwer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *a)
{
	size_t	len;

	len = ft_strlen(dest);
	while (*a)
	{
		dest[len] = *a;
		len++;
		a++;
	}
	dest[len] = '\0';
	return (dest);
}
