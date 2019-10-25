/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbonilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 18:16:07 by cbonilla          #+#    #+#             */
/*   Updated: 2019/10/20 18:48:51 by cbonilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "fun.h"

char	*ft_1number(int l)
{
	char	*p;
	int		aux;

	aux = 1;
	p = malloc(l + 2);
	p[0] = '1';
	while (--l > 0)
	{
		p[aux] = '0';
		aux++;
	}
	p[aux] = ':';
	p[aux + 1] = 0;
	return (p);
}

void	else_mod2(char *str, char *nbr, int i, int l)
{
	char	*straux;

	straux = malloc(4);
	straux[0] = nbr[i];
	straux[1] = '0';
	straux[2] = ':';
	straux[3] = 0;
	ft_write(str, straux);
	free(straux);
	if (nbr[i + 1] == '0' && l > 2)
	{
		straux = ft_1number(l - 1);
		ft_write(str, straux);
		free(straux);
	}
}

int		ft_mod2(char *str, char *nbr, int i, int l)
{
	char *straux;

	if (nbr[i] == '1')
	{
		straux = malloc(4);
		straux[0] = nbr[i];
		straux[1] = nbr[i + 1];
		straux[2] = ':';
		straux[3] = 0;
		ft_write(str, straux);
		free(straux);
		straux = ft_1number(l - 1);
		if (l > 2)
			ft_write(str, straux);
		free(straux);
		return (1);
	}
	else
	{
		else_mod2(str, nbr, i, l);
		return (0);
	}
}

void	ft_mod1(char *str, char *nbr, int i, int l)
{
	char *straux;

	straux = malloc(3);
	straux[0] = nbr[i];
	straux[1] = ':';
	straux[2] = 0;
	ft_write(str, straux);
	free(straux);
	straux = ft_1number(l);
	if (l > 1)
		ft_write(str, straux);
	free(straux);
}

void	ft_mod0(char *str, char *nbr, int i)
{
	char	*straux;

	straux = malloc(3);
	straux[0] = nbr[i];
	straux[1] = ':';
	straux[2] = 0;
	ft_write(str, straux);
	free(straux);
	ft_write(str, "100");
}
