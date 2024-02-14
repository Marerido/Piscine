/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tunglaub <tunglaub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 17:13:28 by tunglaub          #+#    #+#             */
/*   Updated: 2024/02/14 17:33:01 by tunglaub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int function_1(int variable_1, int variable_2)
{	
		int variable_3;
		variable_3 = variable_1 + variable_2;
		return (variable_3);
}

int main(void)
{
		int a;
		int b;

		b = 5;
		a = function_1(b,2);

		return(0);
}

