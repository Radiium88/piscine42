/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush03.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsion <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 13:56:16 by nsion             #+#    #+#             */
/*   Updated: 2022/11/06 19:23:30 by nsion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c);
void	ft_first(int x);
void	ft_middle(int x, int y);
void	ft_end(int x);

void	ft_rush03(int x, int y)
{
	if (y >= 1)
		ft_first(x);
	if (y >= 3)
		ft_middle(x, y);
	if (y >= 2)
		ft_end(x);
}

void	ft_first(int x)
{
	int	i;

	ft_putchar('A');
	if (x > 2)
	{
		i = x - 2;
		while (i > 0)
		{
			ft_putchar('B');
			i--;
		}
	}
	if (x > 1)
		ft_putchar('C');
	ft_putchar('\n');
}

void	ft_middle(int x, int y)
{
	int	i;
	int	j;

	if (y >= 3)
	{
		j = y - 2;
		while (j > 0)
		{
			ft_putchar('B');
			if (x > 2)
			{
				i = x - 2;
				while (i > 0)
				{
					write(1, " ", 1);
					i--;
				}
			}
			if (x > 1)
				ft_putchar('B');
			ft_putchar('\n');
			j--;
		}
	}
}

void	ft_end(int x)
{
	int	i;

	ft_putchar('A');
	if (x > 2)
	{
		i = x - 2;
		while (i > 0)
		{
			ft_putchar('B');
			i--;
		}
	}
	if (x > 1)
		ft_putchar('C');
	ft_putchar('\n');
}
