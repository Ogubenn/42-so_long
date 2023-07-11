/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogdurkan <ogdurkan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 14:55:48 by ogdurkan          #+#    #+#             */
/*   Updated: 2023/07/11 14:55:49 by ogdurkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	size_t	counter;
	t_list	*temp;

	counter = 0;
	while (lst[counter] != NULL)
	{
		temp = lst[counter];
		lst[counter] = lst[counter]->next;
		del(temp->content);
		free(temp);
	}
}
