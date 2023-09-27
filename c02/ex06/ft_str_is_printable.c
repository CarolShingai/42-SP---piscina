/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshingai <cshingai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 16:18:23 by cshingai          #+#    #+#             */
/*   Updated: 2023/09/03 18:50:44 by cshingai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	index;
	int	x;

	index = 0;
	x = 1;
	while (str[index] != '\0')
	{
		if (str[index] >= 32 && str[index] < 127)
		{
			x = 1;
		}
		else
			return (0);
		index++;
	}
	return (x);
}
int main(void)
{
    char    a[] = "";
    char    b[] = {35, 37, 40, 30};
    printf("%d %d", ft_str_is_printable(a), ft_str_is_printable(b));
}
