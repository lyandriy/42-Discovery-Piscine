/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyandriy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 04:00:35 by lyandriy          #+#    #+#             */
/*   Updated: 2022/07/28 17:55:46 by lyandriy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	k = 0;
	if (size != 0)
	{
		j = size - 1;
		while (src[i] != '\0' && i < j)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	while (src[k] != '\0')
		k++;
	return (k);
}

/*
int main()
{
    char dest[] = "Hola mundo!!";
    char src[] = "Hello there, Venus";
    unsigned int size = 30;
    printf("Destino %s\n", dest);
    printf("Size %u, y destino %s\n", ft_strlcpy(dest, src, size), dest);
    printf("Size %lu. y destino %s", strlcpy(dest, src, 12), dest);
    return (0);
}
*/
