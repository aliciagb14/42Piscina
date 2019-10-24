/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonzale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 19:47:12 by agonzale          #+#    #+#             */
/*   Updated: 2019/10/24 19:47:40 by agonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb <= 1)
	{
		return (0);
	}
	else
	{
		while (i <= nb / 2)
		{
			if (nb % i == 0)
			{
				return (0);
			}
			i++;
		}
		return (1);
	}
}

int		ft_find_next_prime(int nb)
{
	int k;

	k = nb + 1;
	while (!ft_is_prime(k))
	{
		k++;
	}
	return (k);
}
