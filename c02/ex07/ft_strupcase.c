/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabrito- <mabrito-@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 19:15:28 by mabrito-          #+#    #+#             */
/*   Updated: 2023/09/04 19:48:34 by mabrito-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char lowercase[] = "abcdefghijklmnopqrstuvwxyz";
	char *p_lwr;
	p_lwr = lowercase;
	
	char allcases[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *p_all;
	p_all = allcases;

	char empty[] = "";
	char *p_emp;
	p_emp = empty;

	printf("\n-----\n%s = ", lowercase);
	printf("%s\n", ft_strupcase(p_lwr));
	printf("%s = ", allcases);
	printf("%s\n", ft_strupcase(p_all));
	printf("Empty = %s\n-----\n", ft_strupcase(p_emp));

}*/
