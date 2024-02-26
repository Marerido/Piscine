/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tunglaub <tunglaub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 15:13:58 by tunglaub          #+#    #+#             */
/*   Updated: 2024/02/26 15:22:03 by tunglaub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
        unsigned int    i;
        unsigned int    j;
        unsigned int    k;

        i = 0;
        j = 0;
        k = 0;
        while (dest[i] != '\0')
        {
                ++i;
        }
        while (src[j] != '\0' && j < size )
        {
                dest[i + j] = src[j];
                ++j;
        }
        dest[i+j] = '\0';

        while (dest[k] != '\0')
        {
            ++k;
        }
        return (k);
}

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "Hello";
    char str2[] = "world";

    printf("%d\n", ft_strlcat(str1, str2, 15));
	printf("%d\n", strlcat(str1, str2, 15));
}
