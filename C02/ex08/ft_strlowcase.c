/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tunglaub <tunglaub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 13:51:19 by tunglaub          #+#    #+#             */
/*   Updated: 2024/02/21 13:54:31 by tunglaub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str [i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

#include <stdio.h>
int	main()
{	
	char str[] = "DS35AdaasAfd)§";
	printf("%s", ft_strlowcase(str));
//	printf("\n%d", ft_str_is_printable("\n\t\v\f"));
}
