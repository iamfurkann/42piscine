/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esduman <esduman@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 15:33:24 by esduman           #+#    #+#             */
/*   Updated: 2025/04/17 10:57:30 by esduman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

int	main(void)
{
	char arr[] = {"merhabaaaaaa"};

	char c = (ft_strlen(arr) / 10) + '0';
	write(1, &c, 1);
	c = (ft_strlen(arr) % 10) + '0';
	write(1, &c, 1);
	write(1, "\n", 1);
	return (0);
}
