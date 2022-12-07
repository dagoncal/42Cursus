/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 12:37:14 by dagoncal          #+#    #+#             */
/*   Updated: 2022/12/07 18:58:47 by dagoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_itoa(int n)
{
	unsigned int	size;
	int	neg;
	int	temp;
	char	*tab;

	size = 0;
	neg = 0;
	if (n <= 0)
	{
		neg = 1;
		n *= -1;
		size = 1;
	}
	temp = n;
	while (temp > 0)
	{
		temp /= 10;
		size++;
	}
	tab = (char *)malloc((size + 1) * sizeof(char));
	if (!tab)
		return (0);
	tab[size] = '\0';
	if (n == 0)
		tab[0] = '0';
	if (neg && n != 0)
		tab[0] = '-';
	while (n > 0)
	{
		tab[--size] = n % 10 + 48;
		n /= 10;
	}
	return (tab);	
}
