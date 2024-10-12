/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:15:39 by racamach          #+#    #+#             */
/*   Updated: 2024/10/12 11:34:44 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*src_ptr;
	unsigned char		*dest_ptr;

	if (!dest || !src)
		return (NULL);
	src_ptr = (const unsigned char *)src;
	dest_ptr = (unsigned char *)dest;
	while (n--)
	{
		*dest_ptr++ = *src_ptr++;
	}
	return (dest);
}
