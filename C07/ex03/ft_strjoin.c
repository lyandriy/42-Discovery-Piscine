/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyandriy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 17:54:22 by lyandriy          #+#    #+#             */
/*   Updated: 2022/07/28 18:12:35 by lyandriy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_tam(char **strs, char *sep, int size)
{
	int	i;
	int	j;
	int	k;

	j = 0;
	k = 0;
	while (j < size)
	{
		i = 0;
		while (strs[j][i] != 0)
		{
			i++;
			k++;
		}
		j++;
	}
	i = 0;
	while (sep[i] != 0)
		i++;
	j = i * (size - 1);
	return (k + j);
}

int	ft_strcat(char *ptr, char *str, int j)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		ptr[j] = str[i];
		i++;
		j++;
	}
	return (j);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		j;
	int		i;
	char	*ptr;

	j = 0;
	if (size == 0)
		return (malloc(1));
	i = ft_tam(strs, sep, size);
	ptr = malloc((i + 1) * sizeof (char));
	i = 0;
	while (i < size)
	{
		j = ft_strcat(ptr, strs[i], j);
		if (i < size - 1)
			j = ft_strcat(ptr, sep, j);
		i++;
	}
	ptr[j] = '\0';
	return (ptr);
}

/*
int main()
{
    int size = 5;
    char *strs[5];
    strs[0] = "hola";
    strs[1] = "mundo";
    strs[2] = "que";
    strs[3] = "tal";
    strs[4] = "estas?";
    char sep[] = "*";
    printf("%s", ft_strjoin(size, strs, sep));
    return (0);
 }
 */
