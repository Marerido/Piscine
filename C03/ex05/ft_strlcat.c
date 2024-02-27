/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tunglaub <tunglaub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 15:13:58 by tunglaub          #+#    #+#             */
/*   Updated: 2024/02/27 07:25:43 by tunglaub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		++i;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	length_d;
	unsigned int	length_s;
	unsigned int	i;
	unsigned int	j;

	length_d = ft_strlen(dest);
	length_s = ft_strlen(src);
	i = 0;
	j = 0;
	if (size < 1)
			return (length_s);
	while (src[j] != '\0' && i < size - 1)
	{
		dest[i] = src[j];
		++i;
		++j;
	}
	dest[i] = '\0';
	if (size < length_d)
		return (length_s + size);
	else
		return (length_d + length_s);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char **argv)
{
	char dest[10] = argv[1];
	char *src = argv[2];
	int size = atoi(argv[3]);
	
	printf("%d\n", ft_strlcat(dest, src, size));
	ft_strlcat(dest, src, size);
	printf("%s\n", dest);
}

