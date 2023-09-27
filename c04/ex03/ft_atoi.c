/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshingai <cshingai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 14:15:20 by cshingai          #+#    #+#             */
/*   Updated: 2023/09/06 11:07:46 by cshingai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	number;
	int	sign;
	int	index;

	number = 0;
	sign = 1;
	index = 0;
	while (str[index] && (str[index] == 32
			|| (str[index] >= 9 && str[index] <= 13)))
	{
		index++;
	}
	while (str[index] && (str[index] == '+' || str[index] == '-'))
	{
		if (str[index] == '-')
			sign *= -1;
		index++;
	}
	while (str[index] && (str[index] >= '0' && str[index] <= '9'))
	{
		number = (number * 10) + (str[index] - '0');
		index++;
	}
	return (number * sign);
}
