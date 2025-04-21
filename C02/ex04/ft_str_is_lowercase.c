/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esduman <esduman@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 19:21:15 by esduman           #+#    #+#             */
/*   Updated: 2025/04/20 19:38:31 by esduman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;
	
	i = 0;
	while(str[i])
	{
		if(!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}

	return (1);
}

int	main(void)
{
	char str[] = {"abc"};

	printf("%d", ft_str_is_lowercase(str));
	return (0);
}
