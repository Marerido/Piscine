/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bherndle <bherndle@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 10:58:12 by bherndle          #+#    #+#             */
/*   Updated: 2024/02/17 22:57:59 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putchar(char c);

void print_line(int x, int left, int middle, int right)
{
	int space;
	
	space = 1;

	ft_putchar(left);

	while(space < (x - 1))
	{
	ft_putchar(middle);
	space++;
	}

	ft_putchar(right);
}

void rush(int x, int y)
{
	char i;

	i = 0;
	while (i <= y)
	{
		if (i == 0)
		{
			print_line(x, 'A', 'B', 'C');
			ft_putchar('\n');
		}
		else if (i > 0 && i < y)
		{
			print_line(x, 'B', ' ', 'B');
			ft_putchar('\n');
		}
		else
		{
			print_line(x, 'A', 'B', 'C');
			ft_putchar('\n');
		}
		++i;
	}
}
	
