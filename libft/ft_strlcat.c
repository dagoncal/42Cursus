/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 14:05:03 by dagoncal          #+#    #+#             */
/*   Updated: 2022/11/04 16:06:10 by dagoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	i;
	size_t	i2;

	len = ft_strlen(dst) + ft_strlen(src);
	i = ft_strlen(dst);
	i2 = 0;
	/* Check if there's a free byte on dst */
	if (dst[i] == '\0')
	{
		/* If so then concatenate n chars of src to dst */
		while (src[i2] != '\0' && i2 < (size - 1))
		{
			dst[i++] = src[i2++];
		}
		
		dst[i] = '\0';
		return (len);
	}
	/* Else return size */
	return (size);
}
