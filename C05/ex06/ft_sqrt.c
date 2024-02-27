/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tunglaub <tunglaub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 10:45:27 by tunglaub          #+#    #+#             */
/*   Updated: 2024/02/27 11:49:40 by tunglaub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	sqrt(int nb)
{
	double	precission;
	double	low;
	double	mid;
	double	high;

	precission = 0.01;
	low = 0.0;
	high = nb;
	while ((high-low) < precission)
	{
		mid = (high + low)/2;
		if (mid * mid < nb)
			low = mid;
		else
			high = mid;
	}
	return ((low + high)/2);
}

#include <stdio.h>
int	main(void)
{
	printf("%d\n", sqrt(4));
}
	

