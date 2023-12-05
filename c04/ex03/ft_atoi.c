/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabrito- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 15:07:27 by mabrito-          #+#    #+#             */
/*   Updated: 2023/09/07 14:22:50 by mabrito-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	spaces(char *c)
{
	int	i;

	i = 0;
	while ((c[i] >= 9 && c[i] <= 13) || c[i] == 32)
		i++;
	return (i);
}

int	ft_atoi(char *str)
{
	int	resultado;
	int	sinal;
	int	fim;

	resultado = 0;
	sinal = 1;
	fim = spaces(str);
	while (str[fim] == '-' || str[fim] == '+')
	{
		if (str[fim] == '-')
		{
			sinal *= -1;
		}
		fim++;
	}
	while (str[fim] >= '0' && str[fim] <= '9')
	{
		resultado = resultado * 10 + str[fim] - '0';
		fim++;
	}
	return (resultado * sinal);
}
/*
int main()
{
	char str[] = "  +--726sknhsnd39";
	int valor = ft_atoi(str);
	printf("%d\n", valor);
	return (0);
}*/
