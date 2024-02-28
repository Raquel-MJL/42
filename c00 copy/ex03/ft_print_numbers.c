/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 16:49:37 by raqmarti          #+#    #+#             */
/*   Updated: 2024/02/15 22:26:09 by raqmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	numero ;

	numero = '0' ;
	while (numero <= '9')
	{
		write (1, &numero, 1);
		numero ++;
	}
}

int	main(void)
{
	ft_print_numbers();
	return (0);
}
