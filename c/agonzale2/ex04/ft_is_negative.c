/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonzale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 10:13:10 by agonzale          #+#    #+#             */
/*   Updated: 2019/10/14 19:30:13 by agonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative (int n);

void	ft_is_negative(int n)
{
	char	c;

	if (n >= 0)
	{
		c = 'P';
	}
	else
	{
		c = 'N';
	}
	write(1, &c, 1);
}
