/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tunglaub <tunglaub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 14:50:25 by tunglaub          #+#    #+#             */
/*   Updated: 2024/02/26 15:19:15 by tunglaub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;

	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] != '\0' && str[i+j] == to_find[j])
		{
			++j;
		}
		if(to_find[j] == '\0')
			return(str + i);
		++i;
	}
	return (0);
}

#include <stdio.h>
int	main(void)
{
	printf("%s\n", ft_strstr("Hello World Da", "World"));
}
