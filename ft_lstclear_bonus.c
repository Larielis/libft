/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 07:34:55 by racamach          #+#    #+#             */
/*   Updated: 2024/10/26 10:55:47 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Deletes and frees the given list and its contents using the 
 * function `del`.
 *
 * This function iterates through the list pointed to by `lst` and applies 
 * the function `del` to
 * the content of each element. It then frees the element itself. 
 * The pointer to the list is set to `NULL`.
 *
 * @param lst A pointer to the first element of the list.
 * @param del A function used to delete the content of an element.
 */
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next;

	if (lst == NULL || del == NULL)
		return ;
	current = *lst;
	while (current != NULL)
	{
		next = current->next;
		del(current->content);
		free(current);
		current = next;
	}
	*lst = NULL;
}
