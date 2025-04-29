/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esduman <esduman@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 06:12:27 by esduman           #+#    #+#             */
/*   Updated: 2025/04/29 16:21:49 by esduman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int	size, char **strs, char *sep)
{
	int seplength;
	int newlength;
	int	i;
	int	j;
	int	k;
	char	*p;
	int	newpos;
	if (size == '\0')
		return ("");
	seplength = 0;
	while (sep[seplength])
		seplength++;
	i = 0;
	newlength = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			newlength++;
			j++;
		}
		i++;
	}
	newlength += seplength * (size - 1) + 1;
	p = (char *)malloc(sizeof(char) * newlength);
	if(!p)
		return (NULL);
	i = 0;
	newpos = 0;
	while(i < size)
	{
		j = 0;
		while (strs[i][j])
			p[newpos++] = strs[i][j++];
		if(i < size -1)
		{
			k = 0;
			while(sep[k])
				p[newpos++] = sep[k++];
		}
		i++;
	}
	p[newpos] = '\0';
	return (p);	
}

#include <stdio.h>

int	main(void)
{
	char *strs[] = {"Hello", "world", "this", "is", "C"};
	char sep[] = "\n";
	int size = 5;

	char *p = ft_strjoin(size, strs, sep);

	printf("%s\n", p);
	free(p);
}
