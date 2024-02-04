/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyandriy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 14:15:28 by lyandriy          #+#    #+#             */
/*   Updated: 2022/07/28 17:42:36 by lyandriy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	if (src[i] == 0)
		dest[i] = '\0';
	return (dest);
}

/*
int	main()
{
	char dest[50] = "hola";
	char src[] = "mundo";
	ft_strcpy(dest, src);
	printf("%s", src);
	return(0);
}
*/
