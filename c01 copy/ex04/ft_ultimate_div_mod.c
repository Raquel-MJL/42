/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 18:46:20 by raqmarti          #+#    #+#             */
/*   Updated: 2024/02/21 10:00:43 by raqmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	c = *a;
	*a = c / *b;
	*b = c % *b;
}

/*int	main(void)
{
	int a;
	a = 18;
	int b;
	b = 5;
	ft_ultimate_div_mod(&a, &b);
	printf ("%i" "\n" , a);
	printf ("%i" , b);
	return 0;
}*/
