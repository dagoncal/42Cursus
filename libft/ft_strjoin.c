/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 18:06:01 by dagoncal          #+#    #+#             */
/*   Updated: 2022/11/16 18:20:51 by dagoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	len;
	char	*str;

	len = (ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char);
	if (s1 && s2)
	{
		str = (char *)malloc(len);
		if (str)
		{
			ft_strlcat(str, s1, len);
			ft_strlcat(str, s2, len);
			return (str);
		}
		else
			return (0);
	}
	else
		return (0);
}
