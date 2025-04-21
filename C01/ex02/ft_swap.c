/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esduman <esduman@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 17:21:11 by esduman           #+#    #+#             */
/*   Updated: 2025/04/17 10:43:51 by esduman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	main(void)
{
	int a = 5;
	int b = 3;
	char c;
	ft_swap(&a, &b);
	c = a + '0';
	write(1, &c, 1);
	write(1, " ", 1);

	c = b + '0';
        write(1, &c, 1);
        write(1, "\n", 1);
	return (0);
}
