/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabrito- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 14:54:40 by mabrito-          #+#    #+#             */
/*   Updated: 2023/09/14 12:26:49 by mabrito-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strcat(char *dest, const char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0') 
	{
		i++;
	}
	while (src[j] != '\0') 
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_final_length(char **strs, int size, int sep_length)
{
	int	final_length;
	int	i;

	final_length = 0;
	i = 0;
	while (i < size && strs[i] != NULL)
	{
		final_length += ft_strlen(strs[i]);
		final_length += sep_length;
		i++;
	}
	return (final_length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		full_length;
	int		i;
	char	*str;
	char	*dest;

	full_length = ft_final_length(strs, size, ft_strlen(sep));
	str = (char *)malloc((full_length + 1) * sizeof(char));
	dest = str;
	if (!dest)
		return (0);
	i = 0;
	while (i < size)
	{
		ft_strcat(dest, strs[i]);
		dest += ft_strlen (strs[i]);
		if (i < size - 1)
		{
			ft_strcat(dest, sep);
			dest += ft_strlen(sep);
		}
		i++;
	}
	*dest = '\0';
	return (str);
}
/*
int main()
{
	char *strs[] = {"hello", "world"};
	int size = 2;
	char *sep = ", ";
	char *resultado = ft_strjoin(size, strs, sep);

	if(resultado)
	{
		printf("%s\n", resultado);
		free(resultado);
	}
	else
	{
		printf("malloc falhou\n");
	}
	return (0);
}*/
