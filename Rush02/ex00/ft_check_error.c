/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyandriy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 19:27:29 by lyandriy          #+#    #+#             */
/*   Updated: 2022/07/24 21:28:49 by lyandriy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "rush02.h"

int	ft_check_error(char *av)
{
	int	i;

	i = 0;
	while (av[i] != '\0')
	{
		if (av[i] < '0' || av[i] > '9')
		{
			write (1, "Error\n", 6);
			return (0);
		}
		else if (ft_strlen(av) > 37)
		{
			write (1, "Error\n", 6);
			return (0);
		}
		i++;
	}
	return (1);
}
