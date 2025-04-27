/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esduman <esduman@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 01:42:01 by esduman           #+#    #+#             */
/*   Updated: 2025/04/17 01:54:03 by esduman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	if(argc > 1)
		while(*argv[argc - 1])
			write(1	, argv[argc - 1]++, 1);
	
	write(1, "\n", 1);
	return (0);
}
