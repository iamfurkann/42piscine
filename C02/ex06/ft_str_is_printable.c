/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esduman <esduman@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 19:47:42 by esduman           #+#    #+#             */
/*   Updated: 2025/04/20 21:05:09 by esduman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if(!(str[i] >= 32 && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
{
	char str[] = {" &)"};
	
	printf("%d", ft_str_is_printable(str));
	return (0);
}
