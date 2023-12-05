/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabrito- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 12:51:43 by mabrito-          #+#    #+#             */
/*   Updated: 2023/09/12 18:37:18 by mabrito-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	a;
	int	i;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	*range = (int *)malloc((max - min) * sizeof(int));
	i = 0;
	a = min;
	while (a < max)
	{
		range[0][i] = a;
		i++;
		a++;
	}
	return (i);
}
/*
int main()
{
	int min = 46;
	int max = 56;
	int *resultado;
	int size = ft_ultimate_range(&resultado, min, max);
	int i;

	while (i < (max - min))
	{
		printf("%d ", resultado[i++]);
	}
	return (0);
}*/
