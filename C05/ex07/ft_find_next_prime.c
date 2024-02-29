/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tunglaub <tunglaub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 19:25:24 by tunglaub          #+#    #+#             */
/*   Updated: 2024/02/29 19:45:30 by tunglaub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int number)
{
	int	i;

	i = 2;
	if (number <= 1)
		return (0);
	while (number / i > 1)
	{
		if (number % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	j;

	j = 0;
	if (ft_is_prime(nb) == 0)
	{
		while (ft_is_prime(nb + j) == 0)
		{
			j++;
		}
	}
	return (nb + j);
}
