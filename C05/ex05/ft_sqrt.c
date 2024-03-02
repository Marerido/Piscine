/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tunglaub <tunglaub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 19:35:37 by tunglaub          #+#    #+#             */
/*   Updated: 2024/03/02 21:42:40 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	long int	low;
	long long	mid;
	long int	high;

	low = 0;
	high = nb;
	if (high <= 0 || nb > 2147395600)
		return (0);
	while ((high - low) > 1)
	{
		mid = (low + high) / 2;
		if (mid * mid < nb)
		{
			low = mid;
		}
		else
		{
			high = mid;
		}
	}
	if ((low + 1) * (low + 1) == nb)
		return (low + 1);
	else
		return (0);
}
