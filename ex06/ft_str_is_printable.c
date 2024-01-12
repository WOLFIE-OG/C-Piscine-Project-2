/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otodd <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:41:47 by otodd             #+#    #+#             */
/*   Updated: 2023/10/12 13:29:58 by otodd            ###   ########.fr       */
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

int	ft_str_is_printable(char *str)
{
	if (ft_strlen(str) == 0)
	{
		return (1);
	}
	while (*str)
	{
		if (*str >= ' ' && *str <= '~')
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
/* int	main(void)
{
	char	test[] = "8n0 4ruv -1':@:@__=__++__=+_";
	int	temp;

	temp = ft_str_is_printable(test);
	printf("%d", temp);
	
	int	test2 = 0;
	while (test2 != 300)
	{
		printf("%d - %c\n", test2, test2);
		test2++;
	}
	return (0);
}*/
