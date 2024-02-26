/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tunglaub <tunglaub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 14:35:33 by tunglaub          #+#    #+#             */
/*   Updated: 2024/02/26 14:35:40 by tunglaub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && (s1[i] != '\0' &&  s2[i] != '\0') && i < n)
	{
		++i;
	}
	return (s1[i] - s2[i]);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char s1[] = "Hallo";
	char s2[] = "Halln";
	printf("%d\n", ft_strncmp(s1,s2,8));
	printf("%d\n", strncmp(s1,s2,8));
}
