/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 07:05:10 by cbukuba           #+#    #+#             */
/*   Updated: 2021/09/23 07:05:13 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
		i ++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		c ++;
	}
	return (c);
}

int	ft_lng(int size, char **strs, char *sep)
{
	int	i;
	int	lng;

	i = 0;
	lng = 0;
	while (i < size)
	{
		lng += ft_strlen(strs[i]);
		i ++;
	}
	lng += (size - 1) * ft_strlen(sep) + 1;
	return (lng);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*str;

	if (size == 0)
	{
		str = malloc(sizeof(char));
		*str = 0;
		return (0);
	}
	str = malloc(sizeof(char) * ft_lng(size, strs, sep));
	if (!str)
		return (0);
	*str = 0;
	i = 0;
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (i < size - 1)
			ft_strcat(str, sep);
		i ++;
	}
	return (str);
}

// #include <stdio.h>

// int    main(void)
// {
//     char    *array[] = {"Un", "Deux", "Trois", "Quatre"};
//     int        size = 0;
//     char    *sep = "_-<=>-_";
//     char    *ret;

//     ret = ft_strjoin(size, array, sep);
//     if (!ret)
//         printf("NULL!!\n");
//     else if (!size)
//     {
//         free(ret);
//         printf("FREE!!\n");
//     }
//     else
//     {
//         printf("ret = |%s|\n", ret);
//         free(ret);
//     }
//     return (0);
// }