/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabrito- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 12:48:43 by mabrito-          #+#    #+#             */
/*   Updated: 2023/09/09 13:25:01 by mabrito-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	x;

	x = 1;
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	else
		x = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (x);
}
/*
int main ()
{
	int n = 6;
	printf("%d", ft_fibonacci(n));
	return (0);
}*/
