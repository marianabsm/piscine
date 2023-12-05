/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabrito- <mabrito-@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 19:27:54 by mabrito-          #+#    #+#             */
/*   Updated: 2023/09/04 19:43:15 by mabrito-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <strings.h>

int	is_alpha(char c)
{
	if ((c >= 'a' && c <= 'z' ) || (c >= 'A' && c <= 'Z'))
		return (1);
	else if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	capitalize_next;

	i = 0;
	capitalize_next = 1;
	while (str[i] != '\0')
	{
		if (is_alpha(str[i]))
		{
			if (capitalize_next && str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			else if (!capitalize_next && str[i] >= 'A' && str[i] <= 'Z')
			{
				str[i] += 32;
			}
			capitalize_next = 0;
		}
		else
		{
			capitalize_next = 1;
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = "a+mariana, na 42lisboa a passar o ExAmE final";

	printf("%s", ft_strcapitalize(str));
	return 0;
}*/
