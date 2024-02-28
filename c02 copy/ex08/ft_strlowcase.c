/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:20:53 by raqmarti          #+#    #+#             */
/*   Updated: 2024/02/23 14:28:26 by raqmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++ ;
	}
	return (str);
}

/*int	main(void)
{
	char str[40] = "HOLA MUNDO!";
	ft_strlowcase(str);
	printf("La cadena actualizada es: %s", ft_strlowcase(str));
	return 0;
}*/
