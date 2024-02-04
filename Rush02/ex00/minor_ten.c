/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minor_ten.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyandriy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 19:31:35 by lyandriy          #+#    #+#             */
/*   Updated: 2022/07/24 19:37:11 by lyandriy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	minor_ten(char *roller, char av, char *nose)
{
	int	i;
	int	j;
	int	k;

	k = 0;
	i = 0;
	j = 0;
	if (av != '0')
	{
		while (av != roller[i])
			i++;
		if (av == roller[i])
		{
			while (roller[i] < 97 || roller[i] > 122)
				i++;
			j = 0;
			while ((roller[i] >= 97 && roller[i] <= 122) && (roller[i] != '\n'))
			{
				nose[k] = roller[i];
				i++;
				k++;
			}
		}	
	}
	nose[k] = '\0';
}
