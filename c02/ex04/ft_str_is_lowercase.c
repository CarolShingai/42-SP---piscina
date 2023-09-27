/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshingai <cshingai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:32:39 by cshingai          #+#    #+#             */
/*   Updated: 2023/09/06 16:09:39 by cshingai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] > 96 && str[i] < 123))
		{	
			i++;
		}
		else
			return (0);
	}
	return (1);
}
// int main(void)
// {
//     char    a[] = "ABDHR";
//     char    b[] = "cafcg";
//     printf("%d %d", ft_str_is_lowercase(a), ft_str_is_lowercase(b));
//}
