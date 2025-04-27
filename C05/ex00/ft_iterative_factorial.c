/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esduman <esduman@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 22:47:09 by esduman           #+#    #+#             */
/*   Updated: 2025/04/27 23:15:32 by esduman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	a;

	a = 1;
	if (nb < 0)
		return (0);
	while (nb > 1)
	{
		a *= nb;
		nb--;
	}
	return (a);
}
#include <stdio.h>

int	main(void)
{
	int nb = 6;
	printf("%d", ft_iterative_factorial(nb));
}	
