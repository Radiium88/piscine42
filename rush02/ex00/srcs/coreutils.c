/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coreutils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romaurel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 17:06:48 by romaurel          #+#    #+#             */
/*   Updated: 2022/11/20 23:22:01 by jsoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"
#include <stdio.h>

void	printing_number(char *tab, char *str)
{
	print_hundred(tab[0], str);
	if (ft_atoi(tab) % 100 <= 20 && ft_atoi(tab) % 100 >= 10)
		print_tenth(tab, str);
	else
	{
		print_tenth(tab, str);
		print_unite(tab[2], str);
	}
	return ;
}

void	number_cap(int lenght, char *str)
{
	if (lenght == 2)
		num_print(ft_strstr_string(str, "1000"));
	else if (lenght == 3)
		num_print(ft_strstr_string(str, "1000000"));
	else if (lenght >= 4)
		num_print(ft_strstr_string(str, "1000000000"));
	write(1, " ", 1);
	return ;
}

void	number_calculator(char **tab, char *str)
{
	int	i;
	int	lenght;
	int	temp_lenght;

	i = 0;
	lenght = 0;
	while (tab[lenght])
		lenght++;
	temp_lenght = lenght;
	while (i < temp_lenght)
	{
		if (ft_strstr_string(str, tab[i]))
			num_print(ft_strstr_string(str, tab[i]));
		else if (!tab[i - 1] && tab[i][0] == 48
				&& tab[i][1] == 48 && tab[i][2] == 48)
			num_print(ft_strstr_char(str, '0'));
		else
			printing_number(tab[i], str);
		number_cap(lenght, str);
		lenght--;
		i++;
	}
}

char	*str_filter(char *str)
{
	char	*new_str;
	int		i;
	int		j;

	j = 0;
	i = 0;
	while (str[i])
		i++;
	new_str = malloc((i + 1) * sizeof(char));
	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
		new_str[j++] = str[i++];
	new_str[j] = 0;
	return (new_str);
}

typedef struct s_tab {
	int	i;
	int	j;
	int	y;
	int	l;
}	t_tab;

char	**tab_maker(char *str)
{
	char	**tab;
	t_tab	v;

	v.i = 1;
	v.j = 0;
	v.y = 0;
	v.l = -1;
	while (str[v.i])
		v.i++;
	tab = (char **) malloc(((v.i / 3) + 1) * sizeof(char *));
	while (v.l < ((v.i / 3) + 1))
		tab[v.l++] = malloc(3 * sizeof(char));
	if (v.i % 3)
	{
		if (v.i % 3 == 1)
			range_one(tab, str, v.y++, v.j++);
		else if (v.i % 3 == 2)
		{
			range_two(tab, str, v.y++, v.j++);
			v.j++;
		}
	}
	fill(tab, v.y, v.j, str);
	return (tab);
}
