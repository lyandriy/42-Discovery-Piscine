/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_before_ten.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyandriy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 19:50:27 by lyandriy          #+#    #+#             */
/*   Updated: 2022/07/24 20:21:54 by lyandriy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "rush02.h"

void	ft_before_ten(char *roller, char av, char *nose)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (av != roller[i])
		i++;
	if (av == roller[i])
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
	}
	i = 0;
	while (nose[i] != '\0')
	{
		write(1, &nose[i], 1);
		i++;
	}
}
