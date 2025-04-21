/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esduman <esduman@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 07:24:41 by esduman           #+#    #+#             */
/*   Updated: 2025/04/20 19:46:47 by esduman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;
	i = 0;
	while (src[i]  && dest[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char arr1[] = {"merhaba"};
	char arr2[] = {"iyiyim"};
	printf("Arr1: %s\nArr2:%s\n", arr1, arr2);
	ft_strcpy(arr1, arr2);

	printf("Arr1: %s\nArr2: %s", arr1, arr2);
	return (0);
}
