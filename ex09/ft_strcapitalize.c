/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otodd <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 14:25:17 by otodd             #+#    #+#             */
/*   Updated: 2023/10/12 16:09:11 by otodd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

const int	g_char_offset = ('a' - 'A');

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (*str)
	{
		length++;
		str++;
	}
	return (length);
}

char	*ft_strcapitalize(char *str)
{
	char		*new_string;
	int			index;

	index = 0;
	new_string = str;
	while (index <= ft_strlen(str))
	{
		if ((str[index] >= 'a' && str[index] <= 'z') )
			new_string[index] -= g_char_offset;
		index++;
	}
	return (new_string);
}

int	main(void)
{
	char	test[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char	*ptr;

	ptr = ft_strcapitalize(test);
	printf("%s", ptr);
	return (0);
}
