/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tunglaub <tunglaub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 09:48:03 by tunglaub          #+#    #+#             */
/*   Updated: 2024/03/05 10:01:29 by tunglaub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max);

int main(int argc, char **argv)
{
	int **range;
	int min = atoi(argv[1]);
	int max = atoi(argv[2]);
	int length;
	int	i;
	
	i = 0;
	if (argc != 3)
		return (-1);

	range = malloc(sizeof(int*));
	length = ft_ultimate_range(range, min, max);
	while (i < length)
	{
		printf("%d ", (*range)[i]);
		i++;
	}
	free(*range);
	*range = NULL;
}
