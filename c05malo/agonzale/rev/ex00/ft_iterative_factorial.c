/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonzale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 11:44:27 by agonzale          #+#    #+#             */
/*   Updated: 2019/10/24 19:35:49 by agonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int res;

	i = 1;
	res = i;
	if ((nb <= 0) || (nb > 12))
	{
		return (0);
	}
	if (nb == 1)
	{
		return (1);
	}
	while (i <= nb)
	{
		res *= res;
		i++;
	}
	return (res);
}
