/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshingai <cshingai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 15:23:04 by cshingai          #+#    #+#             */
/*   Updated: 2023/09/06 16:07:16 by cshingai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] > 64 && str[index] < 91)
		{
			index++;
		}
		else
			return (0);
	}
	return (1);
}
// int main(void)
// {
//     char    a[] = "AGSVG";
//     char    b[] = "sf";

//     printf("%d %d", ft_str_is_uppercase(a), ft_str_is_uppercase(b));
// }