/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 19:05:44 by raqmarti          #+#    #+#             */
/*   Updated: 2024/02/27 19:12:51 by raqmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strstr(char	*str, char	*to_find)
{
	unsigned int	i;
	unsigned int	h;

	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		h = 0;
		while (str[i + h] == to_find[h])
		{
			if (to_find[h + 1] == '\0')
			{
				return (str + i);
			}
			h++;
		}
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char str1[] = "Hola, buenos días";
	char coinc[] = "buen";
	printf("%s", ft_strstr(str1,coinc));
	return 0;
}*/
