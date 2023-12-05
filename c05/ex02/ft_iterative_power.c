/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabrito- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 11:50:38 by mabrito-          #+#    #+#             */
/*   Updated: 2023/09/09 12:16:32 by mabrito-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = nb;
	while (power > 1)
	{
		res = res * nb;
		power--;
	}
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (res);
}
/*
int main ()
{
	int num = 5, pow = 2;
	printf("%d", ft_iterative_power(num, pow));
	return (0);
}*/
