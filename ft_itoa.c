/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarihan <bpoyraz@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 11:27:35 by bpoyraz           #+#    #+#             */
/*   Updated: 2022/02/18 16:37:35 by bpoyraz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*set_str(int n, int *bas);

char	*ft_itoa(int n)
{	
	char	*str;
	int		bas;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	str = set_str(n, &bas);
	if (n < 0)
		n *= -1;
	if (!str)
		return (NULL);
	while (n >= 10)
	{
		str[--bas] = n % 10 + '0';
		n = n / 10;
	}
	str[--bas] = n % 10 + '0';
	return (str);
}

static char	*set_str(int n, int *bas)
{
	char	*str;

	*bas = 1;
	if (n < 0)
	{
		n *= -1;
		(*bas)++;
	}
	while (n >= 10)
	{
		n /= 10;
		(*bas)++;
	}
	str = (char *)malloc(sizeof(char) * (*bas + 1));
	if (!str)
		return (NULL);
	str[0] = '-';
	str[(*bas)] = '\0';
	return (str);
}
