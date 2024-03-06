/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tunglaub <tunglaub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 10:58:12 by tunglaub          #+#    #+#             */
/*   Updated: 2024/03/06 10:58:36 by tunglaub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

char *ft_strjoin(int size, char **strs, char *sep);

int main()
{
    char *strs[] = {"Hallo", "Welt", "42", NULL};
    char *sep = "+ - + ";
    int size = 3; // Anzahl der Elemente in strs

    char *result = ft_strjoin(size, strs, sep);
    int i = 0;
    while (strs[i] != NULL)
	    i++;
    if (result)
    {
        printf("Ergebnis: %s\n", result);
        free(result); // Speicher freigeben
    }
    return 0;
}
