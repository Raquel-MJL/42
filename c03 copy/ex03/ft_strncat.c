/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 18:01:08 by raqmarti          #+#    #+#             */
/*   Updated: 2024/02/27 19:04:08 by raqmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h> 

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	h;

	if (nb < 1)
	{
		return (dest);
	}
	i = 0;
	h = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[h] != '\0' && h < nb)
	{
		dest[i] = src[h];
		i++;
		h++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int main(void)
{
	char dest[] = "Buenas";
	char src[] = "tardes";
	printf("%s" , ft_strncat(dest,src,3));
	return 0;
}*/
