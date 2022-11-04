/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:36:46 by dagoncal          #+#    #+#             */
/*   Updated: 2022/11/04 17:00:45 by dagoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	size_t	len;
	char	*result;

	i = 0;
	len = ft_strlen(s);
	result = 0;
	/* In case of c == '\0' */
	if (c == '\0' && s[len] == '\0')
	{
		return ((char *)&s[len]);
	}
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			result = (char *)&s[i];
		}
		i++;
	}
	/* Return null */
	return (result);
}
