/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonzale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 11:14:58 by agonzale          #+#    #+#             */
/*   Updated: 2019/10/06 12:51:48 by agonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	lines(int i, int j, int x, int y)
{
	if (i == 0 || i == y - 1)
	{
		if (j == 0 || j == x - 1)
		{
			ft_putchar('o');
		}
		else if (j < x - 1)
		{
			ft_putchar('-');
		}
	}
	else
	{
		if (j == 0 || j == x - 1)
		{
			ft_putchar('|');
		}
		else if (j < x - 1)
		{
			ft_putchar(' ');
		}
	}
}

void	rush(int x, int y)
{
	int i;
	int j;

	i = 0;
	while (i < y && x >= 0 && y >= 0)
	{
		j = 0;
		while (j < x)
		{
			lines(i, j, x, y);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
