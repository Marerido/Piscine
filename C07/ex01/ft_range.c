/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tunglaub <tunglaub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 11:58:07 by tunglaub          #+#    #+#             */
/*   Updated: 2024/03/03 11:58:09 by tunglaub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*p;	

	i = 0;

	while (min >= max)
		return NULL;
	if (!(p = (int*)malloc(sizeof(int)*(max - min + 1))))
		return NULL;
	while (min < max)
	{
		p[i] = min;
		i++;
		min++;
	}
	return (p);
}	
