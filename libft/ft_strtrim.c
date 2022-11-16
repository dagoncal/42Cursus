/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:57:34 by dagoncal          #+#    #+#             */
/*   Updated: 2022/11/08 14:27:57 by dagoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strempty(void)
{
	char	*str;

	str = (char *)malloc(1 * sizeof(char));
	if (str)
	{
		str[0] = '\0';
		return (str);
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	char	*str;

	start = 0;
	end = ft_strlen(s1) - 1;
	len = 0;
	while (ft_strchr(set, s1[start]) && s1[start] != '\0')
		start++;
	while (ft_strchr(set, s1[end]) && end > start)
		end--;
	if (s1[start] == '\0' || end < start)
		return (ft_strempty());
	len = end - start + 2;
	str = (char *)malloc(len * sizeof(char));
	if (!str)
		return (0);
	end = 0;
	while (start < (len + 1))
	{
		str[end++] = s1[start++];
	}
	return (str);
}
