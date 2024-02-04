/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyandriy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 18:21:35 by lyandriy          #+#    #+#             */
/*   Updated: 2022/07/18 19:57:25 by lyandriy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *i, int *j)
{
	int	k;

	k = *i;
	*i = *j;
	*j = k;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	a;

	i = 0;
	a = size - 1;
	while (i < size / 2)
	{
		ft_swap(&tab[a], &tab[i]);
		a--;
		i++;
	}
}

/*
int	main()
{
	int tab[6] = {1, 5, 8, 9,  2, -3};
	int i;

	ft_rev_int_tab(tab, 6);
	for(i = 0; i < 6; i++)
	printf("%d\n", tab[i]);
	return(0);
}
*/
