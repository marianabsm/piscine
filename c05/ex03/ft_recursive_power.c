/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabrito- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 12:28:03 by mabrito-          #+#    #+#             */
/*   Updated: 2023/09/09 12:47:04 by mabrito-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	res;

	res = nb;
	if (power > 1)
		res = nb * ft_recursive_power(nb, (power - 1));
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (res);
}
/*
int main ()
{
	int num = 5;
	int pow = 2;
	printf("%d", ft_recursive_power(num, pow));
	return (0);
}*/
