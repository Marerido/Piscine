/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tunglaub <tunglaub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 10:51:10 by tunglaub          #+#    #+#             */
/*   Updated: 2024/03/05 22:43:08 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	str_length (char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int total_length(int size, char **strs, char *sep)
{
    int i = 0;
    int total_length = 0;
    int sep_length = str_length(sep);

    while (i < size)
    {
        total_length += str_length(strs[i]);
	i++;
    }
    total_length += (size - 1) * sep_length + 1;
    return total_length;
}

char	ft_strcat (char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = str_length(dest);
	while (src[i] != '\0')
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[i + j] = '\0';
	return (*dest);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	char	*ptr;
	int	i;
	int	total_l;
	
	i = 0;
	total_l = total_length(size, strs, sep);
	if (size == 0)
		return ((char*)malloc(sizeof(char)));
	ptr = (char*)malloc(sizeof(char) * (total_l));
	if (!ptr)
		return NULL;
	while (i < size)
	{
		ft_strcat(ptr, strs[i]);
		if (i < size - 1)
			ft_strcat(ptr, sep);
		i++;
	}
	return ptr;
}

int main()
{
    char *strs[] = {"Hallo", "Welt", "42", NULL};
    char *sep = "+ - + ";
    int size = 3; // Anzahl der Elemente in strs

    char *result = ft_strjoin(size, strs, sep);
    int i = 0;
    while (strs[i] != NULL)
	    i++;
    if (result)
    {
        printf("Ergebnis: %s\n", result);
        free(result); // Speicher freigeben
    }
    return 0;
}
