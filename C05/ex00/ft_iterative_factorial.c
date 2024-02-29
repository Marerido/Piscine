/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tunglaub <tunglaub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 17:32:19 by tunglaub          #+#    #+#             */
/*   Updated: 2024/02/27 08:59:52 by tunglaub         ###   ########.fr       */
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
