/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabrito- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 19:50:50 by mabrito-          #+#    #+#             */
/*   Updated: 2023/09/04 20:08:20 by mabrito-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	x;

	i = 0;
	x = ft_strlen(src);
	if (size != 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (x);
}
/*
int main()
{
    char source[] = "Hello, World!";
    char destination[20];

    unsigned int destination_size = 20;
    unsigned int copied_chars;

    copied_chars = ft_strlcpy(destination, source, destination_size);

    printf("Source: %s\n", source);
    printf("Destination: %s\n", destination);
    printf("Number of characters copied: %u\n", copied_chars);

    return 0;
}*/
