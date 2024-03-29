/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabrito- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 11:06:43 by mabrito-          #+#    #+#             */
/*   Updated: 2023/09/02 18:14:36 by mabrito-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = swap;
		i++;
	}
}
/*
int	main()
{
	int	tab[6] = {0, 7, 2, 8, 4, 5}; 
	int	size = 6;
	
	ft_rev_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d, %d",
		       	tab[0],
		       	tab[1],
		       	tab[2],
		       	tab[3],
		       	tab[4],
		       	tab[5]);
	return(0);
}*/
