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
	char	*p;
	p = (char *)malloc(sizeof(char));
	p = src;
	return (p);
}

#include <stdio.h>

int  main()
{
printf("%s", ft_strdup("chartese"));
}