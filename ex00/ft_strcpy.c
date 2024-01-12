/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otodd <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 11:07:32 by otodd             #+#    #+#             */
/*   Updated: 2023/10/11 12:59:28 by otodd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *string)
{
	int	length;

	length = 0;
	while (*string++)
	{
		length++;
	}
	return (length);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	index;

	index = 0;
	while (ft_strlen(dest) != ft_strlen(src))
	{
		dest[index] = src[index];
		index++;
	}
	return (dest);
}
