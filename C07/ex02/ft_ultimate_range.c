/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyandriy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 19:16:45 by lyandriy          #+#    #+#             */
/*   Updated: 2022/07/28 18:07:13 by lyandriy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	j;

	i = 0;
	j = min;
	if (min >= max)
	{
		range = (NULL);
		return (0);
	}
	*range = (int *) malloc((max - min) * sizeof(int));
	if (!range)
		return (-1);
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (max - j);
}

/*
int main(void)
{
    int *range;
    int min = -5;
    int max = 9;
    printf("%d\n", ft_ultimate_range(&range, min, max));
    int i = max- min - 1;
    while (i >= 0)
    {
        printf("%d", range[i]);
        i--;
    }
    return (0);
}
*/
