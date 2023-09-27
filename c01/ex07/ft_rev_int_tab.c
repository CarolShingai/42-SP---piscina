/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshingai <cshingai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 16:28:01 by cshingai          #+#    #+#             */
/*   Updated: 2023/08/29 12:31:10 by cshingai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size)
	{
		temp = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = temp;
		i++;
		size--;
	}
}
/*
int main(void)
{
    int i;
    int j;
    int n[] = {1,2,3,4,5,6,7};
    i = 7;
    ft_rev_int_tab(n, i);
    
    j = 0;
    while (j < 7)
    {
        printf("%d\n", n[j]);
        j++;
    }
    return (0);
}*/
