/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 20:08:51 by root              #+#    #+#             */
/*   Updated: 2024/03/06 21:30:28 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_stock_str.h"

int	str_len(char *str)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*str_dup(char *str)
{
	char	*ptr;
	int	i;
	int	length;

	i = 0;
	length = str_len(str);
	ptr = (char *)malloc(sizeof(char) * length + 1);
	if (!ptr)
		return (NULL);
	while (str[i] != '\0')
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	printf("str_dup: %s \n\n", ptr);
	return (ptr);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*array;
	//struct s_stock_str	*ptr;
	int	i;

	i = 0;
	array = malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (!array)
		return (NULL);
	while (i < ac)
	{
		array[i].size = str_len(av[i]);
		array[i].str = av[i];
		array[i].copy = str_dup(av[i]);
		i++;
	}
	array[i].str = NULL;
	array[i].copy = NULL;
	return (array);
}


