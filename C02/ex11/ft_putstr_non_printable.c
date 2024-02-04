/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyandriy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 17:27:36 by lyandriy          #+#    #+#             */
/*   Updated: 2022/07/28 17:57:46 by lyandriy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char str)
{
	write(1, &str, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			write(1, &str[i], 1);
		else
		{
			ft_putstr('\\');
			ft_putstr("0123456789abcdef"[(unsigned char)str[i] / 16]);
			ft_putstr("0123456789abcdef"[(unsigned char)str[i] % 16]);
		}
		i++;
	}
}

/*
int	main(void)
{
	ft_putstr_non_printable("Coucou\ntu vasñ bien ?");
	return (0);
}
*/
