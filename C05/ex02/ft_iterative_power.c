/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tunglaub <tunglaub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 08:29:35 by tunglaub          #+#    #+#             */
/*   Updated: 2024/02/27 11:05:41 by tunglaub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int result;

	result = nb;
	if (power < 0)
			return (0);
	if (power == 0)
			return (1);
	if (power == 0 && nb == 0)
			return (1);
	while(power > 1)
	{
		result = nb * result;
		--power;
	}
	return (result);
}

#include <stdlib.h>
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_iterative_power(0, 4));
}
