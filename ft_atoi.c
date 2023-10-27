/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/11 11:23:36 by edribeir      #+#    #+#                 */
/*   Updated: 2023/10/27 11:39:51 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				sign = sign * -1;
		}
		if (str[i] == ' ')
			i++;
		if ((str[i] >= '0') && (str[i] <= '9'))
		{
			result = (result * 10) + (str[i] - 48);
		}
		i++;
	}
	return (result * sign);
}

// int main()
// {
//     int val;
//     int val2;
//     // char str[20] = "Edddd";
//     char str[20] = "120";
//     val = ft_atoi(str);
//     printf("%d", val);
//     val2 = ft_atoi(str);
//     printf("\n%d", val2);
// }
