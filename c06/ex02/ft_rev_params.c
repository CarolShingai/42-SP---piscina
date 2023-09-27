/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshingai <cshingai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 12:21:57 by cshingai          #+#    #+#             */
/*   Updated: 2023/09/07 16:03:14 by cshingai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i_size;
	int	i_str;

	i_size = argc -1;
	if (argc < 2)
	{
		return (0);
	}
	while (i_size > 0)
	{
		i_str = 0;
		while (argv[i_size][i_str] != '\0')
		{
			write(1, &argv[i_size][i_str], 1);
			i_str++;
		}
		i_size--;
		write(1, "\n", 1);
	}
	return (0);
}
