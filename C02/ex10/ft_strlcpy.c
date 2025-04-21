/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esduman <esduman@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 06:14:20 by esduman           #+#    #+#             */
/*   Updated: 2025/04/21 06:57:57 by esduman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (src[i])
		i++;

	if (size > 0)
	{
		j = 0;
		while (j < size - 1 && src[j])
		{
			dest[j] = src[j];
			j++;
		}
		dest[j] = '\0';
	}

	return i;
}

int	main(void)
{
	char src[] = {"Hello World"};
	char dest[10];

	ft_strlcpy(dest, src, 10);

	printf("%s", dest);
	return (0);
}
