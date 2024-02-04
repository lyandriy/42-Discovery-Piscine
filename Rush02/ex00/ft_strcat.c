/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyandriy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 19:37:59 by lyandriy          #+#    #+#             */
/*   Updated: 2022/07/24 19:39:59 by lyandriy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*ft_strcat(char *minor_ten, char *nose)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (minor_ten[i] != '\0')
		i++;
	if (nose[0] != '\0')
	{
		minor_ten[i] = ' ';
		i++;
	}
	while (nose[j] != '\0')
	{	
		minor_ten[i] = nose[j];
		i++;
		j++;
	}
	minor_ten[i] = '\0';
	return (minor_ten);
}
