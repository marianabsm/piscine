/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabrito- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 13:25:37 by mabrito-          #+#    #+#             */
/*   Updated: 2023/09/10 12:30:25 by mabrito-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	check_if;
	int	i;

	check_if = 0;
	i = 1;
	if (nb == 0)
		return (0);
	while (i <= 46340)
	{
		check_if = i * i;
		if (check_if == nb)
			return (i);
		i++;
	}
	return (0);
}
/*
int main ()
{
	int num = 25;
	printf("%d", ft_sqrt(num));
	return (0);
}*/
