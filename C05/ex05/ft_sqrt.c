/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyandriy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 23:06:41 by lyandriy          #+#    #+#             */
/*   Updated: 2022/07/27 16:58:36 by lyandriy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while (i < nb)
	{
		if (i * i == nb)
			return (i);
		if (i == 46341)
			return (0);
		i++;
	}
	return (0);
}

/*
int main()
{
	printf("%d", ft_sqrt(-16));
	return (0);
}
*/
