/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 07:57:03 by racamach          #+#    #+#             */
/*   Updated: 2024/10/26 11:01:44 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Iterates through the list `lst` and applies the function `f` 
 * to the content of each element,
 * creating a new list resulting from the successive applications of `f`. 
 * The `del` function is used
 * to delete the content of an element if needed.
 *
 * This function creates a new list by applying the function `f` 
 * to each element of the input list `lst`.
 * If memory allocation fails during the process, the `del` function is 
 * used to free the content of the
 * new elements, and the function returns NULL.
 *
 * @param lst The first element of the list to be mapped.
 * @param f A function to apply to the content of each element.
 * @param del A function to delete the content of an element if needed.
 * @return The new list resulting from the successive applications of `f`, or 
 * `NULL` if memory allocation fails.
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*new_content;

	if (f == NULL || del == NULL)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			del(new_content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
