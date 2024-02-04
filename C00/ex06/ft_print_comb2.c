/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyandriy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:41:24 by lyandriy          #+#    #+#             */
/*   Updated: 2022/07/13 18:07:33 by lyandriy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(int i)
{
	write(1, &i, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_print(i / 10 + 48);
			ft_print(i % 10 + 48);
			write(1, " ", 1);
			ft_print(j / 10 + 48);
			ft_print(j % 10 + 48);
			if (i != 98)
				write(1, ", ", 2);
			j++;
		}
		i++;
	}
}

/*
int	main()
{
	ft_print_comb2();
	return(0);
}
*/
