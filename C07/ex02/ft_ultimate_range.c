/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esduman <esduman@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 05:56:56 by esduman           #+#    #+#             */
/*   Updated: 2025/04/28 06:12:04 by esduman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	proc;
	int	i;
	
	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}	
	proc = max - min;
	*range = (int *)malloc(sizeof(int) * proc);
	if (*range == NULL)
		return (-1);
	while (min < max)
		(*range)[i++] = min++;
	return (proc);
}

#include <stdio.h>

void	print_arr(int *arr, int size)
{
	int	i;

	i = 0;
	while(i < size)
		printf("%d ", arr[i++]);
}

int	main(void)
{
	int	*range;
	int	min = 3;
	int	max = 7;
	int	size;
	
	size = ft_ultimate_range(&range, min, max);

	if (size > 0)
	{
		print_arr(range, size);
		free(range);
	}
}
