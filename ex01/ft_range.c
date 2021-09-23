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

	tab = malloc(sizeof(int) * (max - min));
	if (min >= max)
		return (NULL);
	if (!tab)
		return (NULL);
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

// int    main()
// {
//     int        max;
//     int        min;
//     int        i;
//     int        *ret;

//     min = 9;
//     max = 12;
//     i = 0;
//     ret = ft_range(min, max);
//     if (!ret)
//         printf("NULL");
//     while (i < (max - min))
//     {
//         printf("tab[%d] = %d\n", i, ret[i]);
//         i++;
//     }
//     free(ret);
// }