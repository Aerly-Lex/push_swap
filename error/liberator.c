/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   liberator.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 14:26:49 by Dscheffn          #+#    #+#             */
/*   Updated: 2023/12/02 14:58:48 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// This function free's everything
// and calls the function ft_error
// which exits the program
void	liberator_stack(t_list **stack, int error)
{
	t_list	*ptr;
	t_list	*tmp;

	ptr = *stack;
	while (ptr)
	{
		tmp = ptr;
		ptr = ptr->next;
		free(tmp);
	}
	ptr = NULL;
	tmp = NULL;
	*stack = NULL;
	if (error == 1)
		ft_error();
}
