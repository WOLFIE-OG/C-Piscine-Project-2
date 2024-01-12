/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otodd <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:41:47 by otodd             #+#    #+#             */
/*   Updated: 2023/10/12 12:12:47 by otodd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (*str)
	{
		str++;
		length++;
	}
	return (length);
}

int	ft_str_is_numeric(char *str)
{
	if (ft_strlen(str) == 0)
	{
		return (1);
	}
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
		{
			str++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/*
int	main(void)
{
	char	test[] = "";
	int	temp;

	temp = ft_str_is_numeric(test);
	printf("%d", temp);
	return (0);
}
*/
