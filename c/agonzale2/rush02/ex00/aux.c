/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbonilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 19:43:17 by cbonilla          #+#    #+#             */
/*   Updated: 2019/10/20 19:43:47 by cbonilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int		ft_strlen(char *str)
{
	int aux;

	aux = 0;
	while (*(str + aux) != 0)
		aux++;
	return (aux);
}

char	*ft_strcpy(char *dest, char *src)
{
	int aux;

	aux = 0;
	while (*(src + aux) != '\0' && src[aux] != '\n')
	{
		*(dest + aux) = *(src + aux);
		aux++;
	}
	*(dest + aux) = '\0';
	return (dest);
}

char	*ft_strdup(char *str)
{
	char *dest;

	dest = malloc(ft_strlen(str) + 1);
	return (ft_strcpy(dest, str));
}

void	ft_putchar(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}
