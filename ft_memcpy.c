/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:15:39 by racamach          #+#    #+#             */
/*   Updated: 2024/10/12 18:10:07 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*src_ptr;
	char	*dest_ptr;

	src_ptr = (char *)src;
	dest_ptr = (char *)dest;
	if (!dest && !src)
		return (NULL);
	while (n--)
	{
		*dest_ptr++ = *src_ptr++;
	}
	return (dest);
}
