/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 17:24:46 by racamach          #+#    #+#             */
/*   Updated: 2024/09/27 17:37:39 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*duplicate;
	size_t	len;

	len = ft_strlen(s1) + 1;
	duplicate = (char *)malloc(len * sizeof(char));
	if (duplicate == NULL)
	{
		return (NULL);
	}
	ft_memcpy(duplicate, s1, len);
	return (duplicate);
}
