/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabrito- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 09:34:00 by mabrito-          #+#    #+#             */
/*   Updated: 2023/09/07 09:39:19 by mabrito-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;
	unsigned char	a;
	unsigned char	b;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' && s2[i] != '\0'))
	{
		i++;
	}
	a = s1[i];
	b = s2[i];
	return (a - b);
}
/*
int main(void)
{
char str1[] = "teste";
char str2[] = "teste";

int result = ft_strcmp(str1, str2);

if(result < 0)
	printf ("'%s' is smaller than '%s'\n", str1, str2);
else if(result == 0)
	printf ("'%s' is equal to '%s'\n", str1, str2);
else
	printf ("'%s' is bigger than '%s'\n", str1, str2);
return 0;
}*/
