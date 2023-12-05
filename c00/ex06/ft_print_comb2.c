/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabrito- <mabrito-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 16:18:39 by mabrito-          #+#    #+#             */
/*   Updated: 2023/08/31 14:47:38 by mabrito-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)

{
	write(1, &c, 1);
}

void	check_if_end(int i)
{
	if (i < 98)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	check_if_single(int num)
{
	if (num <= 9)
	{
		ft_putchar('0');
		ft_putchar(num + 48);
	}
	else
	{
		ft_putchar(num / 10 + 48);
		ft_putchar(num % 10 + 48);
	}
}

void	ft_print_comb2(void)
{
	int	i; 
	int	j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			check_if_single(i);
			ft_putchar(' ');
			check_if_single(j);
			check_if_end(i);
			j++;
		}
		i++;
	}
}

/*
int main(void)
{
	char i = 0;
	char j = i + 1;
	ft_print_comb2();
}
*/
