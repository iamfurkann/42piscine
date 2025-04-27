/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esduman <esduman@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 01:54:37 by esduman           #+#    #+#             */
/*   Updated: 2025/04/17 02:38:56 by esduman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strcpy(char *s1,const char *s2)
{
	char *temp;

	temp = s1;
	while (*s1++ = *s2++);

	return (temp);
}

int	main(void)
{
	char str[] = "Merhaba";
	const char str2[] = "Naber";
	printf("%s\n", str);
	ft_strcpy(str, str2);
	
	int i = 0;
	printf("%s\n%s" , str, str2);

	return (0);
}
