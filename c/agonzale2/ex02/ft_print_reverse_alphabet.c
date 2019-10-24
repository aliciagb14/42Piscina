/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonzale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 09:38:38 by agonzale          #+#    #+#             */
/*   Updated: 2019/10/14 16:43:18 by agonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet (void);

void	ft_print_reverse_alphabet(void)
{
	char	z;

	z = 'z';
	while (z <= 'z' && z >= 'a')
	{
		write(1, &z, 1);
		z--;
	}
}
