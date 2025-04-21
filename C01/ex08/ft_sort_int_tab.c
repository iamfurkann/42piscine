/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esduman <esduman@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 13:03:56 by esduman           #+#    #+#             */
/*   Updated: 2025/04/19 13:59:49 by esduman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	value;
	int	swap;

	i = 0;
	swap = 0;
	while (i < size - 1)
	{	
		if (tab[i] > tab[i + 1])
		{
			value = tab[i + 1];
			tab[i + 1] = tab[i];
			tab[i] = value;
			swap = 1;
		}
		i++;
	}
	if (swap)
		ft_sort_int_tab(tab, size - 1);
}
