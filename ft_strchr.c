/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaattwoo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 09:15:09 by aaattwoo          #+#    #+#             */
/*   Updated: 2022/02/28 20:17:14 by aaattwoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == (char)c)
			return ((char *)(str));
		str++;
	}
	if (c == '\0' && *str == '\0')
		return ((char *)(str));
	return (NULL);
}

/*int main ()
{
	const char str[] = "Section of a string, is here. Or is not here";
	const char ch = '.';
	char *ret;

	ret = ft_strchr(str, ch);

	printf("String after |%c| is - |%s|\n", ch, ret);

	return (0);
}*/
