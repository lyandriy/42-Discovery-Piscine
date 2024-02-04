/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyandriy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 18:51:05 by lyandriy          #+#    #+#             */
/*   Updated: 2022/07/21 21:37:34 by lyandriy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	num;
	int	neg;

	neg = 1;
	i = 0;
	num = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
			i++;
	if (str[i ] == '-' || str[i] == '+')
	{
        if (str[i] == '-')
        neg *= -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
	{
		num = (str[i] - 48) + (num * 10);
		i++;
	}
	return (num * neg);
}

/*
int main()
{
	char str[] = " ---+--+1234ab567";
	printf("%d", ft_atoi(str));
	return(0);
}
*/
