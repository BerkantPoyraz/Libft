/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoyraz <bpoyraz@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:10:27 by bpoyraz           #+#    #+#             */
/*   Updated: 2022/02/09 16:11:04 by bpoyraz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int val, size_t n)
{
	unsigned char	*x;

	x = (unsigned char *)s;
	while (n-- > 0)
		*x++ = val;
	return (s);
}
