/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suustame <suustame@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 15:55:34 by suustame          #+#    #+#             */
/*   Updated: 2024/10/30 02:30:08 by suustame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (d == NULL && s == NULL)
		return (d);
	if ((d < s) || (d == s))
		ft_memcpy(dst, src, n);
	if (d > s)
	{
		while (n--)
		{
			d[n] = s[n];
		}
	}
	return (dst);
}
