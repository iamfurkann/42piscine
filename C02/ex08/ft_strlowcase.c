/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esduman <esduman@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 21:53:17 by esduman           #+#    #+#             */
/*   Updated: 2025/04/20 22:06:17 by esduman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;
	
	i = 0;
	while (str[i])
	{
		if((str[i] >= 'A' && str[i] <= 'Z'))
			str[i] += 32;
		i++;
	}
	return (str);
}

int	main(void)
{
	char str[] = {"AAaa"};

	printf("%s", ft_strlowcase(str));
	return (0);
}
