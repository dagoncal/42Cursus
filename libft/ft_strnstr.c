/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 18:51:30 by dagoncal          #+#    #+#             */
/*   Updated: 2022/11/05 13:25:50 by dagoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	i2;

	i = 0;
	i2 = 0;
	if (ft_strlen(little) == 0)
	{
		return ((char *)big);
	}
	while (big[i] != '\0' && i < len)
	{
		i2 = 0;
		while (big[i + i2] == little[i2] && big[i + i2] != '\0' && i + i2 < len)
		{
			if (little[i2 + 1] == '\0')
			{
				return ((char *)&big[i]);
			}
			i2++;
		}
		i++;
	}
	return (0);
}
