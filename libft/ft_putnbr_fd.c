/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 19:54:05 by ebulwer           #+#    #+#             */
/*   Updated: 2019/09/20 20:53:35 by ebulwer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nb;
	char			k;

	if (!n)
		return ;
	if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
		nb = (unsigned int)n;
	}
	else
		nb = (unsigned int)n;
	if (nb >= 10)
		ft_putnbr_fd(nb / 10, fd);
	nb = nb % 10 + 48;
	k = (char)nb;
	write(fd, &k, 1);
}
