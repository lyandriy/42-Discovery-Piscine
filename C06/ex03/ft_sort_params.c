/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyandriy <lyandriy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 11:49:27 by lyandriy          #+#    #+#             */
/*   Updated: 2023/07/23 12:29:10 by lyandriy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(char **argv1, char **argv2)
{
	char	*i;

	i = *argv1;
	*argv1 = *argv2;
	*argv2 = i;
}

void	ft_putstr(char *argv)
{
	int	i;

	i = 0;
	while (argv[i] != '\0')
	{			
		write(1, &argv[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc - 1)
	{
		j = 0;
		if (argv[i][j] == argv[i + 1][j])
		{
			while ((argv[i] || argv[i + 1]) && argv[i][j] == argv[i + 1][j])
				j++;
		}
		if (argv[i][j] > argv[i + 1][j])
		{
			ft_swap(&argv[i], &argv[i + 1]);
			i = 0;
		}
		i++;
	}
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		i++;
	}
}
