/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tunglaub <tunglaub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 08:35:27 by tunglaub          #+#    #+#             */
/*   Updated: 2024/02/24 15:37:46 by tunglaub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		dest[i] = str[i];
		++i;
	}
	dest[i] = '\0';

	return (0);
}

#include <stdio.h>

char    *ft_strcpy(char *dest, char *str);

int main()
{
    char str[] = "Hey there";
    char dest[0];

    ft_strcpy(dest, str);

    printf("%s", dest);

	return (0);
}
