/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyandriy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 20:45:35 by lyandriy          #+#    #+#             */
/*   Updated: 2022/07/24 21:42:38 by lyandriy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

int		ft_strlen(char *av);
char	*ft_strcat(char *minor_ten, char *nose);
void	ft_putstr(char *nose);
int		ft_check_error(char *av);
int		ft_open(char *ptr);
void	minor_ten(char *roller, char av, char *nose);
void	ft_before_ten(char *roller, char av, char *nose);
int		ft_ten_to_nineteen(char *roller, char *av, char *nose);
void	ft_twenty_to_ninety(char *roller, char *av, char *nose);
int		ft_roller_coaster(char *roller, char *av);

#endif
