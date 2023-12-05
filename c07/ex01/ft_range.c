/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabrito- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 19:18:46 by mabrito-          #+#    #+#             */
/*   Updated: 2023/09/12 18:37:08 by mabrito-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	a;
	int	*arr;
	int	i;

	if (min >= max)
		return (0);
	arr = (int *)malloc((max - min) * sizeof(int));
	if (!arr)
		return (0);
	i = 0;
	a = min;
	while (a < max)
	{
		arr[i] = a;
		i++;
		a++;
	}
	return (arr);
}
/*
int main()
{
	int min = 46;
	int max = 56;
	int *resultado = ft_range(min, max);
	int i = 0;

	while (i < (max - min))
	{
		printf("%d ", resultado[i++]);
	}
	return (0);
}*/
