/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 21:56:14 by racamach          #+#    #+#             */
/*   Updated: 2024/10/12 18:23:37 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*tmp;
	size_t				i;

	i = 0;
	tmp = (const unsigned char *)s;
	while (i < n)
	{
		if (*tmp == (unsigned char)c)
		{
			return ((void *)tmp);
		}
		tmp++;
		i++;
	}
	return (NULL);
}
