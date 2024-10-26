/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 06:52:18 by racamach          #+#    #+#             */
/*   Updated: 2024/10/26 10:57:44 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Deletes and frees a single element of the list.
 *
 * This function deletes the content of the element `lst` using the function 
 * `del` and then frees the element itself.
 * The memory of `lst` is freed, but the next element is not freed.
 *
 * @param lst The element to be deleted.
 * @param del A function used to delete the content of the element.
 */
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst != NULL && del != NULL)
	{
		del(lst->content);
		free(lst);
	}
}
