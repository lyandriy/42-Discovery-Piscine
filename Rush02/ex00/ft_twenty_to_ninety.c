/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_twenty_to_ninety.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyandriy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 20:33:58 by lyandriy          #+#    #+#             */
/*   Updated: 2022/07/24 20:38:58 by lyandriy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "rush02.h"

void	ft_twenty_to_ninety(char *roller, char *av, char *nose)
{
	int		i;
	int		k;
	char	nose1[100];
	char	*num;

	i = 200;
	k = 0;
	while (av[0] != roller[i])
		i++;
	if (av[0] == roller[i])
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
	minor_ten(roller, av[1], nose1);
	num = ft_strcat(nose, nose1);
	ft_putstr(nose);
}
