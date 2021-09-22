/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 12:43:47 by cbukuba           #+#    #+#             */
/*   Updated: 2021/09/21 12:43:52 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*tab;

	if (min >= max)
		return (NULL);
	tab = malloc(sizeof(*tab) * (max - min));
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		i ++;
		min ++ ;
	}
	return (tab);
}

// #include <stdio.h>

// int main()
// {
// 	int *tab = ft_range(7, 6);
// 	int i = 0;

// 	 while (tab[i] != 0)
// 	{	
// 		printf("%d", tab[i]);
// 		i ++;
// 	}
// }