/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 23:34:59 by racamach          #+#    #+#             */
/*   Updated: 2024/10/26 11:05:43 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Allocates and initializes a new element of the list.
 *
 * This function allocates memory for a new list element and initializes 
 * its content with the value
 * provided in the `content` parameter. 
 * The `next` pointer of the new element is set to NULL.
 *
 * @param content The content to initialize the new element with.
 * @return A pointer to the new element, or `NULL` if memory allocation fails.
 */
t_list	*ft_lstnew(void *content)
{
	t_list	*list;

	list = (t_list *)malloc(sizeof(t_list));
	if (!list)
	{
		return (NULL);
	}
	list->content = content;
	list->next = NULL;
	return (list);
}
