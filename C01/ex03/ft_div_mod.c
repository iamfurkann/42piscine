/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esduman <esduman@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 15:13:49 by esduman           #+#    #+#             */
/*   Updated: 2025/04/17 10:48:58 by esduman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

void	putnbr(int nbr)
{
	char c = nbr + '0';
	write(1, &c, 1);
}
int	main(void)
{
	int a = 11;
	int b = 7;
	int div;
	int mod;

	ft_div_mod(a, b, &div, &mod);

	putnbr(div);
	write(1, " ", 1);
	putnbr(mod);
	write(1, "\n", 1);
	return (0);
}

