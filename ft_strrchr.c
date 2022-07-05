/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaattwoo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 10:51:55 by aaattwoo          #+#    #+#             */
/*   Updated: 2022/03/23 21:43:41 by aaattwoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	while (i >= 0)
	{
		if (str[i] == c)
			return ((char *)(str + i));
		i--;
	}
	return (NULL);
}

/*int main ()
{
	const char str[] = "Section of a String. Is it here. Or is it not here--";
	const char ch = '.';
	char *ret;

	ret = ft_strrchr(str, ch);

	printf("string after |%c| is - |%s|\n", ch, ret);

	return (0);
}*/
