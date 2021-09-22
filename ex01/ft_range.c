/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 12:43:47 by cbukuba           #+#    #+#             */
/*   Updated: 2021/09/22 18:48:48 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*tab;

	if (min >= max)
		return (0);
	tab = malloc(sizeof(int) * (max - min));
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		i ++;
		min ++ ;
	}
	return (tab);
}

 #include <stdio.h>

int main()
{
	int max = 6;
	int min = 7;
	int *tab = ft_range(min, max);
	int i = 0;

	if (min >= max)
		return(tab[0]);
	 while (tab[i])
	{	
		printf("%d", tab[i]);
		i ++;
	}
	free(tab);
	return (0);
}