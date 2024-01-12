/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otodd <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 13:32:49 by otodd             #+#    #+#             */
/*   Updated: 2023/10/12 14:42:25 by otodd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strupcase(char *str)
{
	const int	char_offset = ('a' - 'A');
	char		*new_string;

	new_string = str;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str -= char_offset;
		}
		str++;
	}
	return (new_string);
}
/* int	main(void)
{
	char	test[] = "abasdjnkasdsadsadA_SDsaYD7312dy3298hcf9728h657843tv43";
	char	*ptr;

	ptr = ft_strupcase(test);
	printf("%s", ptr);
	return (0);
}*/
