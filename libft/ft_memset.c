/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 17:22:27 by ebulwer           #+#    #+#             */
/*   Updated: 2019/09/18 20:14:51 by ebulwer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t len)
{
	unsigned char	*tmp;
	size_t			i;

	tmp = (unsigned char *)dest;
	i = 0;
	while (i < len)
		tmp[i++] = c;
	return (dest);
}
