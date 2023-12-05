/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabrito- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 13:43:32 by mabrito-          #+#    #+#             */
/*   Updated: 2023/09/09 14:07:49 by mabrito-         ###   ########.fr       */
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
/*
int main()
{
	int num = 7;
	printf("%d", ft_is_prime(num));
	return (0);
}*/
