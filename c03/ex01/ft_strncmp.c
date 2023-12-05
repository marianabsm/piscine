/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabrito- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 10:16:18 by mabrito-          #+#    #+#             */
/*   Updated: 2023/09/05 12:43:59 by mabrito-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned char	a;
	unsigned char	b;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && (s1[i] != '\0' && s2[i] != '\0') && i + 1 < n)
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
char str1[] = "hello evaluator!";
char str2[] = "how are you?";
unsigned int	n = 16;

int result = ft_strncmp(str1, str2, n);//ft_strncmp(str1, str2, n);

if(result < 0)
	printf ("'%s' is smaller than '%s'\n", str1, str2);
else if(result == 0)
	printf ("'%s' is equal to '%s'\n", str1, str2);
else
	printf ("'%s' is bigger than '%s'\n", str1, str2);
return 0;
}*/
