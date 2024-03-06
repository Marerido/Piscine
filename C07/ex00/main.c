/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tunglaub <tunglaub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 11:55:04 by tunglaub          #+#    #+#             */
/*   Updated: 2024/03/06 11:56:22 by tunglaub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src);

int main() {
    char *original = "Hallo Welt!";
    char *copy = ft_strdup(original);

    if (copy == NULL) {
        printf("Speicherzuweisung fehlgeschlagen.\n");
        return 1; // Fehlercode
    }

    printf("Original: %s\n", original);
    printf("Kopie: %s\n", copy);

    // Den kopierten Speicher freigeben, um Speicherlecks zu vermeiden
    free(copy);

    return 0; // Erfolgscode
}
