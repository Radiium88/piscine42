/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   decomposition.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrodor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 14:43:24 by rrodor            #+#    #+#             */
/*   Updated: 2022/11/20 18:57:04 by romaurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*ft_strstr_char(char *str, char to_find)
{
	int	i;

	i = -1;
	while (str[++i])
		if (str[i] == to_find)
			return (&str[i]);
	return (0);
}

char	*ft_strstr_string(char *str, char *to_find)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i])
	{
		k = i;
		j = 0;
		while (str[k] == to_find[j] && to_find[j])
		{
			k++;
			j++;
		}
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}
