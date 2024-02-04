/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyandriy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 00:59:01 by lyandriy          #+#    #+#             */
/*   Updated: 2022/07/28 17:55:03 by lyandriy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[0] >= 97 && str[0] <= 122)
		{
			str[0] -= 32;
			i++;
		}
		if ((str[i] < 97 || str[i] > 122) && (str[i] < 48 || str[i] > 58))
		{
			if (str[i] < 65 || str[i] > 90)
			{
				if (str[i + 1] >= 97 && str[i + 1] <= 122)
					str[i + 1] -= 32;
			}
		}
		i++;
	}
	return (str);
}

/*
int	main()
{
	char str[] = "salut, comment tu vas ? 42mots quArante-deux; cinquante+et+un";
	printf("%s\n", str);
	printf("%s", ft_strcapitalize(str));
	return(0);
}
*/
