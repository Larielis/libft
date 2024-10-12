
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 23:21:53 by racamach          #+#    #+#             */
/*   Updated: 2024/10/12 23:22:04 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{	
	t_list* list;
	list = (t_list*)malloc(sizeof(t_list));
	if (!list)
	{
		return (NULL);
	}
	list->content = content;
	list->next = NULL;
	return (list);
}
