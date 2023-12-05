/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabrito- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 10:38:28 by mabrito-          #+#    #+#             */
/*   Updated: 2023/09/09 11:08:39 by mabrito-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	unsigned int	fac;

	fac = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		fac = nb * fac;
		nb--;
	}
	return (fac);
}
/*
int	main()
{
	int n = 5;
	printf("%d\n", ft_iterative_factorial(n));
	return (0);
}*/
