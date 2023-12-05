/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabrito- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 19:07:24 by mabrito-          #+#    #+#             */
/*   Updated: 2023/09/09 19:24:53 by mabrito-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int	i;
	int	x;

	x = ac - 1;
	while (x > 0)
	{
		i = 0;
		while (av[x][i] != '\0')
		{
			ft_putchar(av[x][i]);
			i++;
		}
		ft_putchar('\n');
		x--;
	}
	return (0);
}
