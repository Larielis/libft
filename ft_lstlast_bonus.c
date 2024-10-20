/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 09:14:48 by racamach          #+#    #+#             */
/*   Updated: 2024/10/20 12:12:25 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
