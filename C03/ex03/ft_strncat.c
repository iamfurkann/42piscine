/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esduman <esduman@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 08:57:37 by esduman           #+#    #+#             */
/*   Updated: 2025/04/21 11:08:22 by esduman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, int nb)
{
	int	i;

	i = 0;

	while (dest[i])
		i++;

	int	j;

	j = 0;
	while (src[j] && nb > 0)
	{
		dest[i] = src[j];
		i++;
		j++;
		nb--;
	}

	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char dest[100] = {"Merhaba"};
	char src[] = {"Dünya"};

	printf("%s", ft_strncat(dest, src, 15));
	return (0);
}
