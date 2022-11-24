/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrodor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 20:49:04 by rrodor            #+#    #+#             */
/*   Updated: 2022/11/20 19:20:29 by romaurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>

void	ft_printint(char *nb, char *str);

char	*ft_strstr_string(char *str, char *to_find);

char	*ft_strstr_char(char *str, char to_find);

int		ft_strlen(char *str);

int		ft_atoi(char *str);

int		reset(int i, int y);

char	**fill(char **tab, int y, int j, char *str);

void	print_unite(char unite, char *str);

void	printing_number(char *tab, char *str);

void	number_cap(int lenght, char *str);

void	number_calculator(char **tab, char *str);

void	num_print(char *str);

char	*str_filter(char *str);

char	**tab_maker(char *str);

void	print_tenth(char *number, char *str);

void	print_hundred(char u, char *str);

char	**range_one(char **tab, char *str, int y, int j);

char	**range_two(char **tab, char *str, int y, int j);

#endif
