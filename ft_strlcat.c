/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:05:28 by racamach          #+#    #+#             */
/*   Updated: 2024/09/25 00:22:41 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	dsize;
	size_t	ssize;
	size_t	res;

	dsize = ft_strlen(dest);
	ssize = ft_strlen(src);
	res = dsize + ssize;
	if (n == 0)
		return (ssize);
	if (dsize >= n)
		return (ssize + n);
	dest += dsize;
	n -= dsize;
	if (ssize >= n)
		ssize = n - 1;
	ft_memcpy(dest, src, ssize);
	dest[ssize] = '\0';
	return (res);
}
