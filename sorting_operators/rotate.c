/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 11:40:25 by Dscheffn          #+#    #+#             */
/*   Updated: 2023/12/01 15:00:15 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// Shifts up all elements by 1
// First element becomes Last
static void	rotate(t_list **stack)
{
	t_list	*first;
	t_list	*last;

	if (!*stack || !(*stack)->next)
		return ;
	first = *stack;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	last = first;
	while (last->next)
		last = last->next;
	last->next = first;
	first->prev = last;
	first->next = NULL;
}

void	ra(t_list **a_stack)
{
	rotate(a_stack);
	write(1, "ra\n", 3);
}

void	rb(t_list **b_stack)
{
	rotate(b_stack);
	write(1, "rb\n", 3);
}

void	rr(t_list **a_stack, t_list **b_stack)
{
	rotate(a_stack);
	rotate(b_stack);
	write(1, "rr\n", 3);
}
