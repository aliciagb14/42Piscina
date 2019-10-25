/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   edit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbonilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 18:33:22 by cbonilla          #+#    #+#             */
/*   Updated: 2019/10/20 18:48:23 by cbonilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "fun.h"

char	*ft_getstr(char *dict)
{
	int		file;
	int		i;
	int		s[2];
	char	*str;
	char	*str_no_space;

	i = 0;
	file = open(dict, O_RDONLY);
	ft_size(dict, s);
	str = malloc(s[0]);
	str_no_space = malloc(s[0]);
	read(file, str, s[0]);
	close(file);
	file = 0;
	while (str[file++] != 0)
	{
		if (str[file] != '\t' && str[file] != '\v' &&
				str[file] != '\f' && str[file] != '\r' && str[file] != ' ')
		{
			str_no_space[i] = str[file];
			i++;
		}
	}
	free(str);
	return (str_no_space);
}

char	*ft_cut(char *str)
{
	int i;

	i = 0;
	while ((str[i] < 'a' || str[i] > 'z') &&
			(str[i] >= 'A' || str[i] <= 'Z'))
		i++;
	return (ft_strdup(str + i));
}

void	ft_write(char *str, char *nbr)
{
	char *strcut;
	char *ptem;

	strcut = malloc(ft_strlen(str));
	ptem = ft_strstr(str, nbr);
	strcut = ft_cut(ptem);
	ft_putchar(strcut);
	free(strcut);
	write(1, " ", 1);
}
