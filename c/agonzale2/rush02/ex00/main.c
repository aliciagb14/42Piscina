/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbonilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 19:20:28 by cbonilla          #+#    #+#             */
/*   Updated: 2019/10/20 19:44:10 by cbonilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "fun.h"

char	*ft_strstr(char *str, char *to_find)
{
	char	*ret;
	int		aux;
	int		aux2;

	aux = 0;
	aux2 = 0;
	ret = str;
	while (str[aux] != 0 && to_find[aux2] != 0)
	{
		if (str[aux] != to_find[aux2])
		{
			aux2 = 0;
			ret = 0;
		}
		if (str[aux] == to_find[aux2])
		{
			ret = ret != 0 ? ret : str + aux;
			aux2++;
			if (to_find[aux2] == 0)
				return (ret);
		}
		aux++;
	}
	ret = to_find[aux2] == 0 ? ret : 0;
	return (ret);
}

void	ft_size(char *dict, int *p)
{
	char	c[1];
	int		file;
	int		s;
	int		l;

	c[0] = 1;
	s = 0;
	l = 1;
	file = open(dict, O_RDONLY);
	while (c[0] != 0)
	{
		c[0] = read(file, c, 1);
		s++;
		if (c[0] == '\n')
			l++;
	}
	p[0] = s;
	p[1] = l;
	close(file);
}

void	ft_printnbr(char *nbr, char *str)
{
	int		l;
	int		lmod;
	int		aux;
	int		mod;

	aux = 0;
	l = ft_strlen(nbr);
	lmod = l;
	if (l == 1 && nbr[0] == '0')
		ft_write(str, "0:");
	while (aux < l)
	{
		mod = lmod % 3;
		if (mod == 0 && nbr[aux] != '0')
			ft_mod0(str, nbr, aux);
		else if (mod == 2 && nbr[aux] != '0')
			aux += ft_mod2(str, nbr, aux, lmod);
		else if (mod == 1 && nbr[aux] != '0')
			ft_mod1(str, nbr, aux, lmod);
		lmod--;
		aux++;
	}
}

int		ft_error(int argc, char **argv)
{
	if (argc == 2 && argv[1] >= 0)
	{
		if (argv[1][0] == 45)
		{
			write(1, "Error\n", 6);
			return (0);
		}
	}
	else if (argc == 3 && argv[2] >= 0)
	{
		if (argv[2][0] == 45)
		{
			write(1, "Error\n", 6);
			return (0);
		}
	}
	return (1);
}

int		main(int argc, char **argv)
{
	char	*str;
	char	*source;
	int		err;

	source = "dict";
	err = ft_error(argc, argv);
	if (err == 1)
	{
		if (argc == 2)
		{
			str = ft_getstr(source);
			ft_printnbr(argv[1], str);
		}
		else if (argc == 3)
		{
			source = argv[1];
			str = ft_getstr(source);
			ft_printnbr(argv[2], str);
		}
	}
	return (0);
}
