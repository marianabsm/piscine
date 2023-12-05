/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabrito- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 10:45:33 by mabrito-          #+#    #+#             */
/*   Updated: 2023/09/02 15:33:19 by mabrito-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	i;

	i = *a;
	*a = *b;
	*b = i;
}
/*
void    ft_swap(int *a, int *b);
int main(void)
{
int a;
int b;
int *pointa;
int *pointb;

a = 1;
b = 0;
pointa = &a;
pointa = &b;
ft_swap(pointa, pointb);
	printf("%d", a);
	printf("%d", b);
return(0);
}*/
