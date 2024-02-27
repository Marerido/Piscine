/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tunglaub <tunglaub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 17:32:19 by tunglaub          #+#    #+#             */
/*   Updated: 2024/02/26 17:55:46 by tunglaub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	number;

	i = 1;
	number = 1;
	if (nb == 0)
		return (0);
	while (i <= nb)
	{
		number = number * i;
		++i;
	}
	return (number);
}

#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_iterative_factorial(4));
}
