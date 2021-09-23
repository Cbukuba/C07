/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 19:42:35 by cbukuba           #+#    #+#             */
/*   Updated: 2021/09/22 23:22:26 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*tab;
	int	lng = 0;

	*range = tab ;
	while (tab[lng])
		lng ++;
	tab = malloc(sizeof(*tab) * (lng + 1));
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		i ++;
		min ++;
	}
	return (**range);
}

#include <stdio.h>
int main()
{
	int **rg;
	int *tab;
	*rg = tab;
	*tab = ft_ultimate_range(rg, 3, 7);
	int i = 0;

	 while (tab[i])
	{	
		printf("%d", tab[i]);
		i ++;
	}
	free(tab);
	return (0);

}