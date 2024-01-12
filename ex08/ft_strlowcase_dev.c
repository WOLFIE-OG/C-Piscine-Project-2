/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otodd <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 13:32:49 by otodd             #+#    #+#             */
/*   Updated: 2023/10/12 16:13:35 by otodd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*int	ft_strlen(char *str)
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

char	*ft_strlowcase(char *str)
{
	const int	char_offset = ('a' - 'A');
	int			index;
	int			length;
	char		*new_string;

	index = 0;
	length = ft_strlen(str);
	new_string = str;
	while (index <= length)
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			new_string[index] = (*str + char_offset);
		}
		index++;
		str++;
	}
	return (new_string);
}
*/
char	*ft_strlowcase(char *str)
{
	const int	char_offset = ('a' - 'A');
	char		*new_string;

	new_string = str;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			*str += char_offset;
		}
		str++;
	}
	return (new_string);
}
