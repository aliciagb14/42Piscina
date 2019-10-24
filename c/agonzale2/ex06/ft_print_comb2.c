/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonzale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 12:39:57 by agonzale          #+#    #+#             */
/*   Updated: 2019/10/20 13:02:40 by agonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);

void	ft_putchar(char a, char b, char d, char e);

void	ft_print_comb2(void)
{
	int		x;
	int		y;
	char	c;

	x = 0;
	y = 0;
	c = '0';
	while (y <= 98)
	{
		x = 0;
		while (x <= 99)
		{
			if (y < x)
			{
				ft_putchar(c + y / 10, c + y % 10, c + x / 10, c + x % 10);
				if (y != 98)
					write(1, ", ", 2);
			}
			x++;
		}
		y++;
	}
}

void	ft_putchar(char a, char b, char d, char e)
{
	char f;

	f = ' ';
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &f, 1);
	write(1, &d, 1);
	write(1, &e, 1);
}
