/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshingai <cshingai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 17:40:00 by cshingai          #+#    #+#             */
/*   Updated: 2023/09/06 18:10:17 by cshingai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
	{
		return (&str[i + j]);
	}
	while (str[i])
	{
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
		{
			if (to_find[j] != '\0')
			{
				return (&str[i + j]);
			}
			j++;
		}
		i++;
		j = 0;
	}
	return (0);
}
// int main()
// {
//     char x[] = "Olá mundo!";
//     char y[] = "";
//     char *result = ft_strstr(x, y);
//     if(result)
//     {
//         printf("Encontrou: %s\n", result);
//     }
//     else
//     {
//         printf("Não encontrou! %s\n", result);
//     }
//     return (0);
// }
