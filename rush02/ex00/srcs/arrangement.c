/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arrangement.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romaurel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 15:22:31 by romaurel          #+#    #+#             */
/*   Updated: 2022/11/20 19:26:29 by romaurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	**range_one(char **tab, char *str, int y, int j)
{
	tab[y][0] = '0';
	tab[y][1] = '0';
	tab[y][2] = str[j];
	return (tab);
}

char	**range_two(char **tab, char *str, int y, int j)
{
	tab[y][0] = '0';
	tab[y][1] = str[j++];
	tab[y][2] = str[j];
	return (tab);
}

char	**fill(char **tab, int y, int j, char *str)
{
	int	i;

	i = 0;
	while (str[j])
	{
		tab[y][i++] = str[j++];
		if (i % 3 == 0)
		{
			i = 0;
			y++;
		}
	}
	tab[y] = 0;
	return (tab);
}

int	ft_atoi(char *str)
{
	int	i;
	int	number;

	number = 0;
	i = 0;
	while (str[i])
		number = number * 10 + str[i++] - 48;
	return (number);
}
