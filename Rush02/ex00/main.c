/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyandriy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 20:41:18 by lyandriy          #+#    #+#             */
/*   Updated: 2022/07/24 20:44:48 by lyandriy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	main(int argc, char **argv)
{
	char	str[1000];

	ft_open(str);
	if (argc == 2)
	{
		if (!ft_check_error(argv[1]))
		{
			return (0);
		}
		ft_roller_coaster(str, argv[1]);
	}
	if (argc == 3)
	{
		if (!ft_check_error(argv[1]))
		{
			return (0);
		}
	}
}
