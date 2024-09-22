/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:15:39 by racamach          #+#    #+#             */
/*   Updated: 2024/09/22 12:08:47 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*s;
	unsigned char		*tmp;

	s = (const unsigned char *)src;
	tmp = (unsigned char *)dest;
	while (n)
	{
		*tmp = *s;
		tmp++;
		s++;
		n--;
	}
	return (dest);
}
