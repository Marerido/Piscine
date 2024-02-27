/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sqrt1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tunglaub <tunglaub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 11:49:57 by tunglaub          #+#    #+#             */
/*   Updated: 2024/02/27 11:55:18 by tunglaub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int sqrt(int nb)
{
    int	low =  0;
    int	high = nb;
    int	mid;
    int	precision =  1; // Define a precision level
/*
    if (nb <  0)
    {
        printf("Error: negative number\n");
        return -1.0; // Return an error value for negative numbers
    }
*/
    while ((high - low) > precision)
    {
        mid = (low + high) /  2;
        if (mid * mid < nb)
        {
            low = mid;
        }
        else
        {
            high = mid;
        }
    }

    return (low + high) /  2; // Return the average of low and high as the result
}

int main(void)
{
    printf("%d\n", sqrt(4)); // Use %f to print double values
    return  0;
}

