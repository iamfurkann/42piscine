/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esduman <esduman@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 02:39:45 by esduman           #+#    #+#             */
/*   Updated: 2025/04/17 04:18:14 by esduman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_repeat_alpha(char arr)
{

	if (arr >= 'A' && arr <= 'Z')
	       return (arr - 'A' + 1);
	else if(arr >= 'a' && arr <= 'z')
		return (arr - 'a' + 1);
	else
		return (1);
}

int	main(int argc, char **argv)
{
	int i;
	int repeat;
	if (argc == 2)
	{
		i = 0;
		while (*argv[1])
		{
			repeat = ft_repeat_alpha(*argv[1]);
			while(repeat--)
				write(1, argv[1], 1);
			argv[1]++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
