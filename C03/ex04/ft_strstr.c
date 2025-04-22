/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esduman <esduman@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 11:09:20 by esduman           #+#    #+#             */
/*   Updated: 2025/04/22 19:44:44 by esduman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
		return str;

	i = 0;
	while(i < 0)
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j] && str[i + j] != '\0')
			j++;
		if(to_find[j] == '\0')
			return &str[i];
		i++;
	}
	return (0);
}

int	main(void)
{
	char str[] = "TutorialsPoint";
	char substr[] = "Point";
	char *ret;

	ret = ft_strstr(str, substr);

	printf("%s\n", ret);
	return (0);
}
