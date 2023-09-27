/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshingai <cshingai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 13:43:27 by cshingai          #+#    #+#             */
/*   Updated: 2023/08/20 13:51:54 by cshingai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char t)
{
	write(1, &t, 1);
}

void rush(int x, int y)
{
	int i;
	int j;

	if (x < 1 || y < 1)
		return ;

	i = 1;
	while (i <= y)
	{
		j = 1;
		while (j <= x)
		{
			if	(i == y || i == 1)
			{ 
				if (j == x)
					ft_putchar('C');
				else if (j == 1)
					ft_putchar('A');			
				else
					ft_putchar('B');
			}
			else
			{
				if (j == x || j == 1)
					ft_putchar('B');
				else
					ft_putchar(' ');
			}
		j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int main(void)
 {
	int x;
	int y;

	x = 1;
	y = 5;
	rush(x, y);
	return (0);
}
