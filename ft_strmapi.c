/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoyraz <bpoyraz@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 23:33:22 by bpoyraz           #+#    #+#             */
/*   Updated: 2022/02/05 23:36:03 by bpoyraz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*a;
	unsigned int	b;

	if (!s)
		return (0);
	a = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!a)
		return (0);
	b = 0;
	while (s[b])
	{
		a[b] = f(b, s[b]);
		b++;
	}
	a[b] = 0;
	return (a);
}
