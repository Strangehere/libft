/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaattwoo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 16:45:29 by aaattwoo          #+#    #+#             */
/*   Updated: 2022/02/13 23:22:25 by aaattwoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (!((c >= 'A' && c <= 'Z')
			|| (c >= 'a' && c <= 'z')))
		return (0);
	else
		return (1);
}

/*int	main(void)
{
	int	var1 = 'd';
	int	var2 = '2';
	int var3 = '\t';
	int var4 = ' ';

	if ( ft_isalpha(var1) )
	{
		printf("var1 = |%c| is an alphabet\n", var1 );
	}
	else
	{
		printf("var1 = |%c| is not an alphabet\n", var1 );
	}

	if ( ft_isalpha(var2) ) 
	{
		printf("var2 = |%c| is an alphabet\n", var2 );
	}
	else
	{
		printf("var2 = |%c| is not an alphabet\n", var2 );
	}

	if ( ft_isalpha(var3) )
	{
		printf("var3 = |%c| is an alphabet\n", var3 );
	}
	else
	{
		printf("var3 = |%c| is not an alphabet\n", var3 );
	}

	if ( ft_isalpha(var4) )
	{
		printf("var4 = |%c| is an alphabet\n", var4 );
	}
	else
	{
		printf("var4 = |%c| is not an alphabet\n", var4 );
	}

	return (0);
}*/
