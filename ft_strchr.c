/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoyraz <bpoyraz@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 15:21:50 by bpoyraz           #+#    #+#             */
/*   Updated: 2022/02/18 13:03:08 by bpoyraz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (c > 127)
		return ((char *)s);
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		++s;
	}
	if (c == '\0')
		return ((char *)s);
	return (0);
}
