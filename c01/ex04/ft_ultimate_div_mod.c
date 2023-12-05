/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabrito- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 10:52:44 by mabrito-          #+#    #+#             */
/*   Updated: 2023/09/02 15:05:00 by mabrito-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	i;
	int	t;

	i = *a / *b;
	t = *a % *b;
	*a = i;
	*b = t;
}
/*
int main()
{
int x;
int y;

x = 15;
y = 3;
ft_ultimate_div_mod(&x, &y);
printf("%d | %d", x, y);
}*/
