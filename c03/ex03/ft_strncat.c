/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshingai <cshingai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 16:42:28 by cshingai          #+#    #+#             */
/*   Updated: 2023/09/06 18:24:37 by cshingai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	number;
	int				i;
	int				j;

	i = 0;
	j = 0;
	number = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j] && number < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
		number++;
	}
	dest[i] = '\0';
	return (dest);
}
// int main(void)
// {
//     char a[] = "mclanche ";
//     char b[] = "feliz";
//     ft_strncat(a, b, 3);
//     printf("%s", a);
// }
