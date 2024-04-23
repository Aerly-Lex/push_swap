/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_index.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:28:00 by Dscheffn          #+#    #+#             */
/*   Updated: 2023/12/01 08:40:17 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	insert_index(t_list *a_stack, int listsize)
{
	int		index;
	int		lowest_value;
	t_list	*ptr;
	t_list	*lowest_ptr;

	index = 1;
	while (index <= listsize)
	{
		lowest_value = INT_MAX;
		ptr = a_stack;
		lowest_ptr = NULL;
		while (ptr)
		{
			if (ptr->index == 0 && ptr->nbr <= lowest_value)
			{
				lowest_ptr = ptr;
				lowest_value = ptr->nbr;
			}
			ptr = ptr->next;
		}
		if (lowest_ptr != NULL)
			lowest_ptr->index = index;
		index++;
	}
}
