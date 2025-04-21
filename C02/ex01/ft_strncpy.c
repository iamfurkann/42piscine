/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esduman <esduman@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 18:00:10 by esduman           #+#    #+#             */
/*   Updated: 2025/04/19 18:43:13 by esduman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
	char *ret = dest;

	if (!n--)
		return ret;

	while ((*dest++ = *src++))
	{
		if (!n--)
			return ret;
	}

	while (n--)
		*dest++ = 0;

	return ret;
}

int	main(void)
{
	char cdizi1[] = "Nasilsin";
	char cdizi2[] = "Iyiyim";

	ft_strncpy(cdizi1, cdizi2, 4);

	printf("cdizi1 bellek içeriği: %s\n", cdizi1);

	return 0;
}
