/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_roller_coaster.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyandriy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 20:14:17 by lyandriy          #+#    #+#             */
/*   Updated: 2022/07/24 21:39:55 by lyandriy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	ft_roller_coaster(char *roller, char *av)
{
	int		len;
	char	nose[100];

	len = ft_strlen(av);
	if (len == 1)
		ft_before_ten(roller, av[0], nose);
	else if (len == 2 && av[0] == '1')
	{
		ft_ten_to_nineteen(roller, av, nose);
	}
	else if (len == 2 && av[0] > '1')
	{
		ft_twenty_to_ninety(roller, av, nose);
	}
	return (0);
}
