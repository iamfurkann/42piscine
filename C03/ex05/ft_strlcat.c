/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esduman <esduman@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 04:11:44 by esduman           #+#    #+#             */
/*   Updated: 2025/04/23 04:26:31 by esduman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while(str[len])
		len++;
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	slen;
	int	dlen;
	int	i;

	slen = ft_strlen(src);
	dlen = 0;
	i = 0;
	while (dlen < size && dest[dlen])
		dlen++;

	if (dlen == size)
		return size + slen;

	i = 0;
	while ((dlen + i + 1) < size && src[i])
	{
		dest[dlen + i] = src[i];
		i++;
	}

	if (dlen + i < size)
		dest[dlen + i] = '\0';

	return (dlen + slen);
}

int	main(void)
{
	char buffer[20] = "Merhaba, ";
	char *eklenecek = "Dünya!   ";
	unsigned int toplam = ft_strlcat(buffer, eklenecek, 20);
	
	printf("Sonuç: %s\n", buffer);
	printf("Uzunluk: %d\n", toplam);

    	return (0);
}

