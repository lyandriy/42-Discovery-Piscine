/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyandriy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 05:22:41 by lyandriy          #+#    #+#             */
/*   Updated: 2022/07/21 18:24:46 by lyandriy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	c_d;
	unsigned int	c_s;
	unsigned int	k;				

	c_d = 0;
	c_s = 0;
	k = 0;
	while (dest[c_d] != '\0')
		c_d++;
	while (src[c_s] != '\0')
		c_s++;
	if (size == 0 || size <= c_d)
		return (size + c_s);
	while (src[k] != '\0' && c_d + k < (size - 1))
	{
		dest[c_d + k] = src[k];
		k++;
	}
	dest[c_d + k] = '\0';
	return (c_d + c_s);
}

/*
int main()
{
	char dest[50] = "Hola "; //5  6
	char src[] = "mundo!!!"; //8 9
	unsigned int	size = 15;
	//printf("%d, %s\n", ft_strlcat(dest, src, size), dest);
	printf("%lu, %s", strlcat(dest, src, size), dest);
	return (0);
}
*/
