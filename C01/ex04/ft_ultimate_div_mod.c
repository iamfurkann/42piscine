/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esduman <esduman@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 15:18:38 by esduman           #+#    #+#             */
/*   Updated: 2025/04/17 10:51:23 by esduman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	o_value;

	o_value = *a;
	*a = *a / *b;
	*b = o_value % *b;
}

void	putnbr(int nbr)
{
	char c = nbr + '0';
	write(1, &c, 1);
}

int	main(void)
{
	int a = 10;
	int b = 3;

	ft_ultimate_div_mod(&a,&b);

	putnbr(a);
	write(1, " ", 1);
	putnbr(b);
	write(1, "\n", 1);
	return (0);
}
