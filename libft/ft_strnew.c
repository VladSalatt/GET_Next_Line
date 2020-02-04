/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 15:59:48 by ebulwer           #+#    #+#             */
/*   Updated: 2019/09/21 16:09:03 by ebulwer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	size_t	count;
	char	*str;

	count = 0;
	str = ft_memalloc(size + 1);
	if (str == NULL)
		return (NULL);
	while (count < size)
	{
		str[count] = '\0';
		count++;
	}
	return (str);
}
