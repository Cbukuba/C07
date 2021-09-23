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

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * (max - min));
	if (!*range)
		return (-1);
	i = 0;
	while (min < max)
	{
		range[0][i] = min;
		i ++;
		min ++;
	}
	return (i);
}

// #include <stdio.h>

// int    main(void)
// {
//     int        max;
//     int        min;
//     int        i;
//     int        *tab;

//     min = -10;
//     max = 10;
//     i = 0;
//     printf("ft_ultimate_range -> |%d|\n", ft_ultimate_range(&tab, min, max));
//     if (!tab)
//         printf("NULL");
//     while (i < (max - min))
//     {
//         printf("tab[%d] = %d\n", i, tab[i]);
//         i++;
//     }
//     free(tab);
// }