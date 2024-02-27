/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tunglaub <tunglaub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 09:00:29 by tunglaub          #+#    #+#             */
/*   Updated: 2024/02/27 09:13:08 by tunglaub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
			return (1);
	else if (power < 0)
			return (0);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}

#include <stdio.h>
int	main(void)
{
	printf("%d\n",ft_recursive_power(3,1));
}
