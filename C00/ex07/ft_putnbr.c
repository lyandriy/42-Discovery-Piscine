/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyandriy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 18:09:39 by lyandriy          #+#    #+#             */
/*   Updated: 2022/07/13 21:44:17 by lyandriy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int long	j;

	j = nb;
	if (j < 0)
	{
		write(1, "-", 1);
		j *= -1;
	}
	while (j > 9)
	{
		ft_putnbr(j / 10);
		ft_putnbr(j % 10);
		return ;
	}
	j = j + 48;
	write(1, &j, 1);
}

/*
int    main()
{
    ft_putnbr(2147483647);
    return(0);
}
*/
