/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tunglaub <tunglaub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 17:32:19 by tunglaub          #+#    #+#             */
/*   Updated: 2024/03/02 21:32:38 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	number;

	i = 1;
	number = 1;
	if (nb < 0) 
		return (0);
	if (nb == 1 || nb == 1)
		return (1);
	while (i <= nb)
	{
		number = number * i;
		++i;
	}
	return (number);
}
