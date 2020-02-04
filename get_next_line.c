/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 15:18:28 by ebulwer           #+#    #+#             */
/*   Updated: 2019/10/14 15:05:58 by ebulwer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int		ft_end_line(char **str, char **line)
{
	int				len;
	char			*tmp;

	len = 0;
	while ((*str)[len] != '\n' && (*str)[len] != '\0')
		len++;
	if ((*str)[len] == '\n')
	{
		*line = ft_strsub(*str, 0, len);
		tmp = ft_strdup(&((*str)[len + 1]));
		free(*str);
		*str = tmp;
		if ((*str)[0] == '\0')
			ft_strdel(str);
	}
	else
	{
		*line = ft_strdup(*str);
		ft_strdel(str);
	}
	return (1);
}

static int		ft_output(char **str, char **line, int rid, int fd)
{
	if (rid < 0)
		return (-1);
	if (str[fd] == NULL)
		return (0);
	else
		return (ft_end_line(&str[fd], line));
}

int				get_next_line(const int fd, char **line)
{
	static char		*str[12288];
	char			buf[BUFF_SIZE + 1];
	int				rid;
	char			*tmp;

	if (fd < 0 || line == NULL)
		return (-1);
	while ((rid = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[rid] = '\0';
		if (str[fd] == NULL)
			str[fd] = ft_strdup(buf);
		else
		{
			tmp = ft_strjoin(str[fd], buf);
			free(str[fd]);
			str[fd] = tmp;
		}
		if (ft_strchr(str[fd], '\n'))
			break ;
	}
	return (ft_output(str, line, rid, fd));
}
