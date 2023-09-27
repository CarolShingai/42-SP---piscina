/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshingai <cshingai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:12:17 by cshingai          #+#    #+#             */
/*   Updated: 2023/09/03 18:41:44 by cshingai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 48) && (str[i] <= 57))
		{
			i++;
		}
		else
			return (0);
	}
	return (1);
}
int main(void)
{
    char    a[] = "asbhl";
    char    b[] = "13954";
    printf("%d %d", ft_str_is_numeric(a), ft_str_is_numeric(b));
}