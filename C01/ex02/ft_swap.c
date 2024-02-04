/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyandriy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 16:16:01 by lyandriy          #+#    #+#             */
/*   Updated: 2022/07/17 00:15:53 by lyandriy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	i;

	i = *a;
	*a = *b;
	*b = i;
}

/*
int main()
{
	int a = 5;
	int b = 6;
	printf("Antes a es %d y b es %d\n", a, b);
	ft_swap(&a, &b);
	printf("Despues a es %d y b es %d", a, b);
	return(0);
}
*/
