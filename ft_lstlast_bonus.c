/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 09:14:48 by racamach          #+#    #+#             */
/*   Updated: 2024/10/26 11:00:27 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Returns the last element of the list.
 *
 * This function traverses the list pointed to by `lst` and 
 * returns the last element.
 * If the list is empty, it returns `NULL`.
 *
 * @param lst The first element of the list.
 * @return The last element of the list, or `NULL` if the list is empty.
 */
t_list	*ft_lstlast(t_list *lst)
{
	t_list	*last_node;

	if (!lst)
	{
		return (NULL);
	}
	while (lst)
	{
		last_node = lst;
		lst = lst->next;
	}
	return (last_node);
}
