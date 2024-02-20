/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tunglaub <tunglaub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 07:16:20 by tunglaub          #+#    #+#             */
/*   Updated: 2024/02/20 07:17:24 by tunglaub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int main(void)
{
    int tab[] = {1, 2, 3, 4};
    int size = 4;
    int i = 0;
    int j = 0;

    while (i < size)
    {
        printf("%d", tab[i]);
        ++i;
    }
    printf("\n");
    
    ft_rev_int_tab(tab, size);

    while (j < size)
    {
        printf("%d", tab[j]);
        ++j;
    }

    return 0;
}

