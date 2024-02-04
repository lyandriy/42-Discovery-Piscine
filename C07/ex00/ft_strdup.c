/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyandriy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 18:52:16 by lyandriy          #+#    #+#             */
/*   Updated: 2022/07/28 17:59:33 by lyandriy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*ptr;

	i = 0;
	j = 0;
	if (!src)
		return (NULL);
	while (src[i] != '\0')
		i++;
	ptr = malloc((i + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	while (j < i)
	{
		ptr[j] = src[j];
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}

/*
int	main()
{
	char *src = "hola mundo!";
	printf("%s\n", ft_strdup(src));
	return (0);
}
*/
