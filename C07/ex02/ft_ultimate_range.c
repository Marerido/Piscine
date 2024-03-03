/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tunglaub <tunglaub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 11:57:36 by tunglaub          #+#    #+#             */
/*   Updated: 2024/03/03 13:49:53 by tunglaub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*ptr;
	int	i;

	i = 0;
	if (max <= min)
		return (0);
	range = max - min;
	if (!(ptr = (int*)malloc((*int) * range)))
		return (-1);
	while (min < max)
	{
		ptr[i] = min;
		i++;
		min++;
	}

