/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonzale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 12:52:07 by agonzale          #+#    #+#             */
/*   Updated: 2019/10/24 00:45:52 by agonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (!to_find[0])
		return (str);
	while (*str)
	{
		j = 0;
		if (*str == to_find[j])
		{
			while (str[j] && (to_find[j] == str[j]))
				j++;
			if (!(to_find[j]))
				return (str);
		}
		str++;
	}
	return (0);
}
