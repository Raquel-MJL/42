/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 16:47:22 by raqmarti          #+#    #+#             */
/*   Updated: 2024/02/15 21:31:00 by raqmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	letra;

	letra = 'z' ;
	while (letra >= 'a')
	{
		write (1, &letra, 1);
		letra --;
	}
}

int	main(void)
{
	ft_print_reverse_alphabet ();
	return (0);
}
