/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esduman <esduman@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 16:07:09 by esduman           #+#    #+#             */
/*   Updated: 2025/04/19 16:33:24 by esduman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	tmp;
	int	start;
	int	finish;

	start = 0;
	finish = size - 1;
	while (start < finish)
	{
		tmp = tab[start];
		tab[start] = tab[finish];
		tab[finish] = tmp;
		start++;
		finish--;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	if(nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr >= 10)
		ft_putnbr(nbr / 10);

	nbr  = (nbr % 10) + '0'; 
	ft_putchar(nbr);
}

int	main(void)
{
	int tab[] = {1,2,3,4};
	int size = 4;

	ft_rev_int_tab(tab, size);
	int i = 0;

	while (i < size)
		ft_putnbr(tab[i++]);

	return (0);
}
