/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabrito- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 14:09:12 by mabrito-          #+#    #+#             */
/*   Updated: 2023/09/10 12:40:54 by mabrito-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;
	int	a;

	if (nb <= 1)
		return (0);
	a = nb;
	i = 0;
	if (nb % 1 == 0)
		i++;
	if (nb % nb == 0)
		i++;
	while (a > 0)
	{
		if ((nb % a == 0) && (a != nb) && (a != 1))
			i++;
		a--;
	}
	if (i == 2)
		return (1);
	return (0);
}

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}
/*
int main()
{
	int num = 6;
	printf("%d", ft_find_next_prime(num));
	return (0);	
}*/
