/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 17:15:07 by racamach          #+#    #+#             */
/*   Updated: 2024/09/19 17:50:06 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	const char	*last;

	while (*s != '\0')
	{
		if (*s == (char)c)
		{
			last = s;
		}
		*s++;
	}
	if (!last)
	{
		return (NULL);
	}
	return ((char *)s);
}
