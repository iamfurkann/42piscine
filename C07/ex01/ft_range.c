/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esduman <esduman@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 05:31:15 by esduman           #+#    #+#             */
/*   Updated: 2025/04/28 05:56:22 by esduman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	proc;
	int	i;
	int	*p;

	if (min >= max)
		return (NULL);
	proc = max - min;
	p = (int *)malloc(sizeof(int) * proc);
	i = 0;
	while(min < max)
		p[i++] = min++;
	return (p);
}

#include <stdio.h>

void	print_arr(int *arr, int size)
{
	int	i;

	i = 0;
	while(i < size)
	{
		printf("%d ", arr[i]);
		i++;
	}
}

int	main(void)
{
	int min = 3;
	int max = 7;
	int *p = ft_range(min, max);
	
	int size = max - min;
	print_arr(p, size);
	free(p);
	
}	
