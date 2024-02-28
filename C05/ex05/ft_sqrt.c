/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tunglaub <tunglaub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 19:35:37 by tunglaub          #+#    #+#             */
/*   Updated: 2024/02/27 19:57:33 by tunglaub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	low;
	int	high;
	int	mid;

	low = 0;
	high = nb;
	if (nb < 0)
		return (-1);
	if (nb == 0)
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
	return (low + 1);
}

int	main(void)
{
	printf("%d\n", ft_sqrt(3025));
	return (0);
}
