/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:05:28 by racamach          #+#    #+#             */
/*   Updated: 2024/09/20 16:29:31 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	strlcat(char *dest, const char *src, size_t n)
{
	size_t	dsize;
	size_t	len;
	size_t	res;

	dsize = ft_strlen(dest);
	len = ft_strlen(src);
	res = dsize + len;
	if (dsize < n)
	{
		dest += dsize;
		n -= dsize;
		if (len >= n)
			len = n - 1;
		dest[len] = '\0';
		ft_memcpy(dest, src, len);
	}
	return (res);
}
