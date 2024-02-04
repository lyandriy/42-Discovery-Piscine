/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_to_nineteen.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyandriy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 20:22:56 by lyandriy          #+#    #+#             */
/*   Updated: 2022/07/24 20:33:37 by lyandriy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"
#include <unistd.h>

int	ft_ten_to_nineteen(char *roller, char *av, char *nose)
{
	int	i;
	int	k;

	i = 80;
	k = 0;
	while (roller[i] != '\0')
	{
		if (av[0] == roller[i] && av[1] == roller[i + 1])
		{
			while (roller[i] < 97 || roller[i] > 122)
				i++;
			while ((roller[i] >= 97 && roller[i] <= 122) && (roller[i] != '\n'))
			{
				nose[k] = roller[i];
				i++;
				k++;
			}	
			nose[k] = '\0';
			ft_putstr(nose);
			return (0);
		}
		i++;
	}
	return (0);
}
