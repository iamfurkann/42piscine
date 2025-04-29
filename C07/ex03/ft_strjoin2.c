/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esduman <esduman@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 06:12:27 by esduman           #+#    #+#             */
/*   Updated: 2025/04/29 15:59:24 by esduman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

char	*org_join_str(char **strs, int size, char *sep, char *p)
{
	int	i;
	int	j;
	int	new_pos;

	i = 0;
	new_pos = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			p[new_pos++] = strs[i][j++];
		if (i < size - 1)
		{
			j = 0;
			while (sep[j])
				p[new_pos++] = sep[j++];
		}
		i++;
	}
	p[new_pos] = '\0';
	return (p);
}

void	*ft_ultimate_strlen(char **strs, int size, int *newlength)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			(*newlength)++;
			j++;
		}
		i++;
	}
	//return (newlengt);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		seplength;
	int		newlength;
	char	*p;

	if (size == 0)
	{
		return (p = malloc(1),*p='\0',p);
		/*p = (char *)malloc(sizeof(char) * 1);
		if (!p)
			return (NULL);
		p[0] = '\0';
		return (p);*/
	}
	// seplength = ft_strlen(sep);
	newlength = 0;
	ft_ultimate_strlen(strs, size, &newlength);
	newlength += ft_strlen(sep) * (size - 1) + 1;
	p = (char *)malloc(sizeof(char) * newlength);
	if (!p)
		return (NULL);
	// p = org_join_str(strs, size, sep, p);
	return (org_join_str(strs, size, sep, p));
}
#include <stdio.h>

int	main(void)
{
	char *str[] ={"mehmet", "ali", "erbil"};
	char sep[] = " ";
	int size = 3;

	printf("%s", ft_strjoin(size, str, sep));
}
