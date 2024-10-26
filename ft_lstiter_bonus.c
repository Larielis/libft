/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 07:55:32 by racamach          #+#    #+#             */
/*   Updated: 2024/10/26 10:59:34 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Iterates through the list and applies the function `f` to the 
 * content of each element.
 *
 * This function traverses the list pointed to by `lst` and applies the 
 * function `f` to the content
 * of each element.
 *
 * @param lst The first element of the list.
 * @param f A function to apply to the content of each element.
 */
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
