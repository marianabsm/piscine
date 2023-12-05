/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabrito- <mabrito-@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 18:54:20 by mabrito-          #+#    #+#             */
/*   Updated: 2023/09/03 18:59:39 by mabrito-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/*
int	main(void)
{
	printf ("%d", ft_str_is_lowercase("dgfsuistufutbdbc"));
	printf ("\n%d", ft_str_is_lowercase("kjasASDhdu873837"));
	printf ("\n%d", ft_str_is_lowercase("heiu736RF483:_-"));
}*/
