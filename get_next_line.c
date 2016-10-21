/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhuk <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/20 12:59:27 by azhuk             #+#    #+#             */
/*   Updated: 2016/10/20 19:58:18 by azhuk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/get_next_line.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

int		get_next_line(const int fd, char **line)
{
	int		ret;
	char	*buf;

	buf = (char *)malloc(sizeof(char) * BUFF_SIZE + 1);
	ret = read(fd, buf, BUFF_SIZE);
	buf[ret] = '\0';
	line = NULL;
	return (1);
}
