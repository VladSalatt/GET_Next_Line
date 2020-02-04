/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 14:45:43 by ebulwer           #+#    #+#             */
/*   Updated: 2019/09/24 17:03:09 by ebulwer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;
	size_t			k;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	k = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (s < d)
	{
		s = s + n - 1;
		d = d + n - 1;
		while (n-- > 0)
			d[i--] = s[k--];
	}
	else
		while (n-- > 0)
			d[i++] = s[k++];
	return (dest);
}
