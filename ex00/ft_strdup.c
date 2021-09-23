/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 17:53:43 by cbukuba           #+#    #+#             */
/*   Updated: 2021/09/20 17:53:46 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		lng;
	char	*p;

	lng = 0;
	while (src[lng] != '\0')
		lng ++;
	p = (char *)malloc(sizeof(char) * lng + 1);
	if (!p)
		return (NULL);
	i = 0;
	while (i < lng)
	{
		p[i] = src[i];
		i ++;
	}
	p[i] = '\0';
	return (p);
}

// #include <stdio.h>

// int  main()
// {

// 	printf("%s", ft_strdup("455468"));
// }