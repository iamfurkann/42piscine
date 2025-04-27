/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esduman <esduman@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 02:15:27 by esduman           #+#    #+#             */
/*   Updated: 2025/04/28 02:21:02 by esduman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	
	i = 3;
	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);

	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}

	return (1);
}

#include <stdio.h>

int	main(void)
{
	int nb = 11;
	
	printf("%d", ft_is_prime(nb));

}
