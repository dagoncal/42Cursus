/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 14:05:03 by dagoncal          #+#    #+#             */
/*   Updated: 2022/11/16 16:55:41 by dagoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstsize;
	size_t	srcsize;
	size_t	i;

	if (size == 0)
		return (0);
	dstsize = ft_strlen(dst);
	srcsize = ft_strlen(src);
	i = 0;
	if (!size || size <= dstsize)
		return (size + srcsize);
	while (src[i] != '\0' && i < (size - dstsize - 1))
	{
		dst[dstsize + i] = src[i];
		i++;
	}	
	dst[dstsize + i] = '\0';
	return (dstsize + srcsize);
}
