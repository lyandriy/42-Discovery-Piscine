/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyandriy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 16:25:01 by lyandriy          #+#    #+#             */
/*   Updated: 2022/07/17 00:16:05 by lyandriy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int main()
{
	int	a = 8;
	int b = 2;
	int div, mod;
	ft_div_mod(a, b, &div, &mod);
	printf("Division de a y b es %d\nModulo de a y b es  %d", div, mod);
	return(0);
}
*/
