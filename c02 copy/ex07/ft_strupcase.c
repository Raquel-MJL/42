/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 13:48:30 by raqmarti          #+#    #+#             */
/*   Updated: 2024/02/23 14:19:42 by raqmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++ ;
	}
	return (str);
}

/*int	main(void)
{
	char str[40] = "hola  mundo";
	ft_strupcase(str);
	printf("La cadena actualizada es: %s", ft_strupcase(str)); 
	return 0;
}*/
