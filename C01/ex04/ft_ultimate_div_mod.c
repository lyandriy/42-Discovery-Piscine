/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyandriy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 17:58:34 by lyandriy          #+#    #+#             */
/*   Updated: 2022/07/18 19:51:27 by lyandriy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/*
int main()
{
	int a = 8;
	int b = 2;
	ft_ultimate_div_mod(&a, &b);
	printf("Division de a y b es %d\nModulo de a y b es %d", a, b);
	return(0);
}
*/
