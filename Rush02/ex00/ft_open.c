/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_open.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyandriy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 19:29:18 by lyandriy          #+#    #+#             */
/*   Updated: 2022/07/24 19:30:54 by lyandriy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	ft_open(char *ptr)
{
	int		fd;
	ssize_t	bytes;

	fd = open("numbers.dict", O_RDONLY);
	if (fd == -1)
	{
		write(1, "Dict Errora\n", 11);
		return (0);
	}
	bytes = read(fd, ptr, 691);
	if (bytes == 0)
	{
		write (1, "Dict Errorb\n", 11);
	}
	close(fd);
	return (0);
}
