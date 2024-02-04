/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyandriy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 21:38:21 by lyandriy          #+#    #+#             */
/*   Updated: 2022/07/27 16:56:09 by lyandriy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	j;

	i = 2;
	j = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		j = j * i;
		i++;
	}
	return (j);
}

/*
int main()
{
	int	i = 3;
	printf("%d", ft_iterative_factorial(i));
	return(0);
}
*/
