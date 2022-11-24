/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoulet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:59:49 by jsoulet           #+#    #+#             */
/*   Updated: 2022/11/12 17:13:42 by jsoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	a;

	a = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		a = (a * -1);
	}
	if (a >= 10)
	{
		ft_putnbr(a / 10);
	}
	ft_putchar((a % 10) + '0');
}
