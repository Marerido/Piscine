/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tunglaub <tunglaub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 09:20:32 by tunglaub          #+#    #+#             */
/*   Updated: 2024/02/20 09:51:27 by tunglaub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcpy(char *dest, char *str);

int	main()
{
	char dest[] = "Hey there";
	char str[20];

	ft_strcpy(dest, str);

	printf("%s", dest);
}


