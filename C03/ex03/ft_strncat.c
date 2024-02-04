/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyandriy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 02:24:03 by lyandriy          #+#    #+#             */
/*   Updated: 2022/07/19 10:31:46 by lyandriy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	int				j;
	unsigned int	k;

	i = 0;
	j = 0;
	k = 0;
	while (dest[i] != '\0')
		i++;
	while (k < nb && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
		k++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
int main()
{
	char dest[] = "Hola ";
	char src[] = "mundo!!!";
	printf("%s\n", ft_strncat(dest, src, 3));
	//printf("%s", strncat(dest, src, 3));
	return (0);
}
*/
