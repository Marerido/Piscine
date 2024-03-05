/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 22:58:43 by root              #+#    #+#             */
/*   Updated: 2024/03/05 23:15:40 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#ifndef FT_BOOELAN_H
#define FT_BOOLEAN_H

#define EVEN(nbr) (nbr%2 == 0)
#define TRUE 1
#define FALSE 0
#define EVEN_MSG "I have an even number of arguments.\n"
#define ODD_MSG "I have an odd number of arguments.\n"
#define SUCCESS 1

typedef int	t_bool;

#endif
