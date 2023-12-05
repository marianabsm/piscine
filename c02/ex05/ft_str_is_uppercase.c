/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabrito- <mabrito-@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 19:00:59 by mabrito-          #+#    #+#             */
/*   Updated: 2023/09/03 19:03:19 by mabrito-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
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
	printf ("%d", ft_str_is_uppercase("DHSYFIDI"));
	printf ("\n%d", ft_str_is_uppercase("kjasASDhdu873837"));
	printf ("\n%d", ft_str_is_uppercase("heiu736RF483:_-"));
}*/
