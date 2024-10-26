/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 23:36:09 by racamach          #+#    #+#             */
/*   Updated: 2024/10/26 10:53:55 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Adds the element `new` at the beginning of the list.
 *
 * This function adds the element `new` to the beginning of the 
 * list pointed to by `lst`.
 * The new element becomes the first element of the list.
 *
 * @param lst A pointer to the first element of the list.
 * @param new The new element to be added to the list.
 */
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
