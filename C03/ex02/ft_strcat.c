/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tunglaub <tunglaub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 14:35:53 by tunglaub          #+#    #+#             */
/*   Updated: 2024/02/26 14:45:00 by tunglaub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		++i;
	}
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		++j;
	}
	dest[i+j] = '\0';
	return (dest);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char dest[100] = "Hallo";
	char src[] = "Duda";

//	printf("%s\n", strcat(dest, src));
	printf("%s\n", ft_strcat(dest, src));
}
