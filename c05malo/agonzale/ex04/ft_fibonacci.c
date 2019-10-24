/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonzale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 19:44:59 by agonzale          #+#    #+#             */
/*   Updated: 2019/10/24 19:45:11 by agonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{
	if (index == 0)
	{
		return (0);
	}
	else if (index == 1)
	{
		return (1);
	}
	else if (index == 2)
	{
		return (1);
	}
	else
	{
		return ((ft_fibonacci(index - 1)) + (ft_fibonacci(index - 2)));
	}
}
