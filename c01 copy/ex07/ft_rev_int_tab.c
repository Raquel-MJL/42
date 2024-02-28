/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 05:00:21 by raqmarti          #+#    #+#             */
/*   Updated: 2024/02/21 12:21:00 by raqmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab [size - i - 1];
		tab [size - i - 1] = tab [i];
		tab [i] = temp;
		i ++;
	}
}

/*int main (void)
{
	int arr [5]={1,2,3,4,5};
	ft_rev_int_tab(arr,5);
	return 0;
}*/
