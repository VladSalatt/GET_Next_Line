/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 15:09:31 by ebulwer           #+#    #+#             */
/*   Updated: 2019/09/18 20:14:29 by ebulwer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	size_t			i;
	unsigned char	*a;
	unsigned char	cc;

	i = 0;
	cc = (unsigned char)c;
	a = (unsigned char *)arr;
	while (n)
	{
		if (a[i] == cc)
			return (&a[i]);
		n--;
		i++;
	}
	return (NULL);
}
