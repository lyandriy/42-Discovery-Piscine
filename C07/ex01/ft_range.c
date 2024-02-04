/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyandriy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 16:42:23 by lyandriy          #+#    #+#             */
/*   Updated: 2022/07/28 18:02:02 by lyandriy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	j;
	int	*ptr;

	j = max - min;
	i = 0;
	if (min >= max)
		return (NULL);
	ptr = malloc(j * sizeof(int));
	if (!ptr)
		return (NULL);
	while (min < max)
	{
		ptr[i] = min;
		min++;
		i++;
	}
	return (ptr);
}

/*
int main(void)
{
    int min = -12;
    int max = 12;
    int *ptr = ft_range(min, max);
    int i = 0;
    while(i < max - min)
    {
        printf("%d, ", ptr[i]);
        i++;
    }
    return (0);
}
*/
