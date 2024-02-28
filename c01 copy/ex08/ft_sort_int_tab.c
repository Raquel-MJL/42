/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 05:59:37 by raqmarti          #+#    #+#             */
/*   Updated: 2024/02/21 06:11:19 by raqmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	n;

	i = 1;
	while (i < size)
	{
		n = i;
		while (n > 0 && *(tab + n - 1) > *(tab + n))
		{
			swap(tab + n, tab + n -1);
			n --;
		}
		i++;
	}
}

/*int main (void)
{
	int arr[9]={1,7,3,6,8,6,2,1,8};
	ft_sort_int_tab(arr,9);
	return 0;
}*/
