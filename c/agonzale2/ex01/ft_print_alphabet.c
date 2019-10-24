/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonzale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 08:54:46 by agonzale          #+#    #+#             */
/*   Updated: 2019/10/09 09:03:11 by agonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet (void);

void	ft_print_alphabet(void)
{
	char	a;
	int		n;

	a = 'a';
	n = 0;
	while (n >= 0 && n < 26)
	{
		write(1, &a, 1);
		a++;
		n++;
	}
}
