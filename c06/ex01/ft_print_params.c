/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabrito- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 18:52:10 by mabrito-          #+#    #+#             */
/*   Updated: 2023/09/10 17:55:35 by mabrito-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char *av[])
{
	int	i;
	int	x;

	x = 1;
	while (x < ac)
	{
		i = 0;
		while (av[x][i] != '\0')
		{
			ft_putchar(av[x][i]);
			i++;
		}
		ft_putchar('\n');
		x++;
	}
	return (0);
}
