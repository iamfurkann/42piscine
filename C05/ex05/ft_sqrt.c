/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esduman <esduman@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 01:15:15 by esduman           #+#    #+#             */
/*   Updated: 2025/04/28 02:15:02 by esduman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	while (i * i < nb)
		i++;
	if (i * i == nb)
		return (i);
	return (0);
}

#include <stdio.h>

int	main(void)
{
	int nb = 125;

	printf("%d", ft_sqrt(nb));
}
