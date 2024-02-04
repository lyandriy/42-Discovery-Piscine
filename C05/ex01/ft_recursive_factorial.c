/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyandriy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 21:50:07 by lyandriy          #+#    #+#             */
/*   Updated: 2022/07/27 16:57:02 by lyandriy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	i;

	i = 0;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (nb * (ft_recursive_factorial(nb -1)));
}

/*
int main()
{
	int	i = 5;
	printf("%d", ft_recursive_factorial(i));
	return (0);
}
*/
