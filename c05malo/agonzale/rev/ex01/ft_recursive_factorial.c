/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonzale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 19:38:04 by agonzale          #+#    #+#             */
/*   Updated: 2019/10/24 19:42:57 by agonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int i;
	int res;

	i = 1;
	res = 1;
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
		return (nb * ft_recursive_factorial(nb - 1));
	}
	return (0);
}
