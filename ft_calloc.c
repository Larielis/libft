/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:24:34 by racamach          #+#    #+#             */
/*   Updated: 2024/10/17 22:26:14 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>
#include <stdio.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*tmp;

	if (nmemb != 0 && size > SIZE_MAX / nmemb)
		return (NULL);
	tmp = malloc(nmemb * size);
	if (!tmp)
		return (NULL);
	ft_bzero(tmp, (nmemb * size));
	return (tmp);
}

int	main(void)
{
	size_t	nmemb;
	size_t	size;
	int		*ft_calloc_array;
	int		*calloc_array;

	nmemb = SIZE_MAX;
	size = SIZE_MAX;
	ft_calloc_array = (int *)ft_calloc(nmemb, size);
	calloc_array = (int *)calloc(nmemb, size);
	if (ft_calloc_array == NULL)
		printf("ft_calloc failed\n");
	else
		printf("ft_calloc succeeded\n");
	if (calloc_array == NULL)
		printf("calloc failed\n");
	else
		printf("calloc succeeded\n");
	printf("ft_calloc_array pointer: %p\n", (void *)ft_calloc_array);
	printf("calloc_array pointer: %p\n", (void *)calloc_array);
	free(calloc_array);
	free(ft_calloc_array);
	return (0);
}
