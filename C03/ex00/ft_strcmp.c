/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tunglaub <tunglaub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:46:39 by tunglaub          #+#    #+#             */
/*   Updated: 2024/02/24 15:09:58 by tunglaub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		while (s2[j] != '\0')
		{
			++j;
		}
		++i;
	}

	if (i == j)
		return (0);
	if (i < j)
		return (-1);
	if (i > j)
		return (1);
}

#include <stdio.h>

int	main()
{
	char s1[] = "Atjbcds";
	char s2[] = "sdddddddsss";

	printf("%d",ft_strcmp(s1, s2));
}

