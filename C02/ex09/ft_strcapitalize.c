/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esduman <esduman@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 01:10:53 by esduman           #+#    #+#             */
/*   Updated: 2025/04/21 06:56:48 by esduman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;

		if ((str[i] >= 'a' && str[i] <= 'z') && j)
			str[i] -= 32;

		if ((str[i] >= 'a' && str[i] <= 'z') ||
				(str[i] >= 'A' && str[i] <= 'Z') ||
				(str[i] >= '0' && str[i] <= '9'))
			j = 0;
		else
			j = 1;
		i++;
	}
	return (str);
}

int	main(void)
{
	char str[] = {"salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un"};

	printf("%s\n", ft_strcapitalize(str));
	return (0);
}
