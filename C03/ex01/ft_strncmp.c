/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esduman <esduman@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 08:12:17 by esduman           #+#    #+#             */
/*   Updated: 2025/04/21 08:24:40 by esduman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while(n--)
	{
		if(*s1++ != *s2++)
			return *s1 - *s2;
	}
	return (0);
}

int	main(void)
{
	char s1[] = {"abcde"};
	char s2[] = {"abcd"};

	printf("%d", ft_strncmp(s1, s2, 4));
	return (0);
}
