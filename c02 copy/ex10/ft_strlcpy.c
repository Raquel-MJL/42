/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 13:35:07 by raqmarti          #+#    #+#             */
/*   Updated: 2024/02/26 17:02:07 by raqmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 

unsigned int	ft_strlcpy(char	*dest, char	*src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src [i];
		i++;
	}
	dest[i] = '\0';
	return (i);
}

/*int	main(void)
{
	char	dest[] = "Malos días";
	char	str[] = "Buenos churros";

	ft_strlcpy(dest, str, 3);
	printf ("%s", dest);
	return 0;
}*/
