/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bherndle <bherndle@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 10:58:12 by bherndle          #+#    #+#             */
/*   Updated: 2024/02/17 13:16:32 by tunglaub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putchar(char c);

void print_line(int x, int left, int middle, int right)
{
	int space;
	space = 1;
	if(x > 0)
	{
	ft_putchar(left);
	}
	while(space < (x - 1))
	{
	ft_putchar(middle);
	space++;
	}
	if(x > 1)
	{
	ft_putchar(right);
	}
}
