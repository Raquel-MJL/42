/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 18:19:37 by raqmarti          #+#    #+#             */
/*   Updated: 2024/02/21 12:17:22 by raqmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main (void)
{
	int kiki;
	int koko;
	ft_div_mod (7, 3, &kiki , &koko);
	printf("%i" "\n" , kiki);
	printf("%i" "\n" , koko);
	return 0;
}*/
