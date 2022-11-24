/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romaurel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 15:22:31 by romaurel          #+#    #+#             */
/*   Updated: 2022/11/20 19:26:29 by romaurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	num_print(char *str)
{
	int	i;

	i = 0;
	while (!(str[i] >= 'a' && str[i] <= 'z'))
		i++;
	while (str[i] != '\n')
		write(1, &str[i++], 1);
}

void	print_hundred(char u, char *str)
{
	if (u == 48)
		return ;
	else
	{
		num_print(ft_strstr_char(str, u));
		write(1, " ", 1);
		num_print(ft_strstr_string(str, "100"));
		write(1, " ", 1);
	}
}

void	print_tenth(char *number, char *str)
{
	char	tenth[3];

	tenth[0] = number[1];
	if (ft_atoi(number) % 100 <= 20 && ft_atoi(number) % 100 >= 10)
		tenth[1] = number[2];
	else
		tenth[1] = 48;
	tenth[2] = 0;
	if (tenth[0] == '0')
		return ;
	else
		num_print(ft_strstr_string(str, tenth));
	write(1, " ", 1);
}

void	print_unite(char unite, char *str)
{
	if (unite == '0')
		return ;
	else
		num_print(ft_strstr_char(str, unite));
	write(1, " ", 1);
}

int	main(int argc, char **argv)
{
	int		file;
	char	*str;
	int		size;

	if (argc != 2)
		return (write(1, "Error Argument\n", 15));
	file = open("numbers.dict", O_RDONLY);
	str = (char *) malloc ((4096 + 1) * sizeof(char));
	size = read (file, str, 4096);
	str[size] = 0;
	number_calculator(tab_maker(str_filter(argv[1])), str);
	write(1, "\n", 1);
	close (file);
	return (0);
}
