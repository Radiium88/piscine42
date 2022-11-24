/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoulet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 16:31:00 by jsoulet           #+#    #+#             */
/*   Updated: 2022/11/17 16:34:48 by jsoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	k;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	k = 0;
	while (src[k] != '\0')
	{
		dest[i] = src[k];
		i++;
		k++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void	ft_reset_variable(int *cmpt1, int *cmpt2)
{
	*cmpt1 = 0;
	*cmpt2 = 0;
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*strfinal;
	int		cmpt1;
	int		cmpt2;
	int		cmpt3;

	ft_reset_variable(&cmpt1, &cmpt2);
	while (cmpt1 < size)
		cmpt2 += ft_strlen(strs[cmpt1++]);
	cmpt3 = ft_strlen(sep) * (size);
	strfinal = malloc(sizeof(char) * (cmpt2 + cmpt3) + 1);
	ft_reset_variable(&cmpt1, &cmpt2);
	while (cmpt1 <= size - 1)
	{
		ft_strcat(strfinal, strs[cmpt1]);
		if (cmpt1 < size - 1)
			ft_strcat(strfinal, sep);
		cmpt1++;
	}
	return (strfinal);
}
