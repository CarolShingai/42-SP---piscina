/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshingai <cshingai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 18:08:59 by cshingai          #+#    #+#             */
/*   Updated: 2023/09/06 16:07:20 by cshingai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 65 && str[index] <= 90)
		{
			str[index] += 32;
		}
		index++;
	}
	return (str);
}
// int main(void)
// {
//     char a[] = "AgDjBC";
//     printf("%s", ft_strlowcase(a));
// }
