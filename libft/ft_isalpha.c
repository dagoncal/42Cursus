/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagoncal <dagoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:19:43 by dagoncal          #+#    #+#             */
/*   Updated: 2022/11/04 11:37:06 by dagoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (256);
	}
	return (0);
}

static int	ft_islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (256);
	}
	return (0);
}

int	ft_isalpha(int c)
{
	if (ft_isupper(c) || ft_islower(c))
	{
		/* 1024 is being returned just because isalpha() returns 1024 as well */
		return (1024);
	}
	return (0);
}
