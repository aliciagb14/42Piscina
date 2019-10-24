/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonzale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 10:52:29 by agonzale          #+#    #+#             */
/*   Updated: 2019/10/09 14:12:58 by agonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb	(void);

void ft_putchar (char a, char b, char c);

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	b = '1';
	c = '2';
	while (a <= '7')
	{
		ft_putchar(a, b, c);
		if (c < '9')
			c++;
		else if (c == '9' && b < '8')
		{
			b++;
			c = b + 1;
		}
		else if (b == '8')
		{
			a++;
			b = a + 1;
			c = b + 1;
		}
	}
}

void	ft_putchar(char a, char b, char c)
{
	char d;
	char e;

	d = ',';
	e = ' ';
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a != '7' || b != '8' || c != '9')
	{
		write(1, &d, 1);
		write(1, &e, 1);
	}
}
