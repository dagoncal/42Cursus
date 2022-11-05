/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 14:39:56 by dagoncal          #+#    #+#             */
/*   Updated: 2022/11/05 18:51:44 by dagoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem_alloc;

	if (nmemb != 0 && size != 0)
	{
		mem_alloc = malloc(nmemb * size);
		/* If the memory was successfully allocated then return it */
		if (mem_alloc)
		{
			ft_bzero(mem_alloc, nmemb);
			return (mem_alloc);
		}
	}
	return (0);
}
