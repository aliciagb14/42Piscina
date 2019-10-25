/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fun.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbonilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 18:49:18 by cbonilla          #+#    #+#             */
/*   Updated: 2019/10/20 19:11:04 by cbonilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUN_H
# define FUN_H

char	*ft_strstr(char *str, char *to_find);
void	ft_size(char *dict, int *p);
char	*ft_putchar(char *str);
char	*ft_strdup(char *str);
char	*ft_strcpy(char *dest, char *src);
int		ft_strlen(char *str);
void	else_mod2(char *str, char *nbr, int i, int l);
int		ft_mod2(char *str, char *nbr, int i, int l);
void	ft_mod1(char *str, char *nbr, int i, int l);
void	ft_mod0(char *str, char *nbr, int i);
char	*ft_1number(int l);
char	*ft_getstr(char *dict);
char	*ft_cut(char *str);
void	ft_write(char *str, char *nbr);
#endif
