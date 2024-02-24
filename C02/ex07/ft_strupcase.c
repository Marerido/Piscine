/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tunglaub <tunglaub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 13:47:43 by tunglaub          #+#    #+#             */
/*   Updated: 2024/02/21 13:50:51 by tunglaub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str [i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

#include <stdio.h>
int	main()
{		
	char str[] = "afgDs+356#2sA?";
	printf("%s", ft_strupcase(str));
//	printf("\n%d", ft_str_is_printable("\n\t\v\f"));
}
