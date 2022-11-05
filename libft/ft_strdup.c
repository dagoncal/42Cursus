/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 16:07:57 by dagoncal          #+#    #+#             */
/*   Updated: 2022/11/05 18:10:09 by dagoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*str;

	len = ft_strlen(s);
	str = (char *)malloc(len + 1 * sizeof(char));
	if (str)
	{
		/* len - 1 is because otherwise strlcpy won't copy the last char  */
		ft_strlcpy(str, s, len + 1);
		return (str);
	}
	return (0);
}
