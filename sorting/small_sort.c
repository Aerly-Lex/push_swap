/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 09:12:00 by Dscheffn          #+#    #+#             */
/*   Updated: 2023/12/02 14:39:05 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	ft_highest(t_list *a)
{
	t_list	*ptr;
	int		nbr;

	ptr = a;
	nbr = ptr->index;
	while (ptr)
	{
		if (ptr->index > nbr)
			nbr = ptr->index;
		ptr = ptr->next;
	}
	return (nbr);
}

static int	ft_lowest(t_list *a)
{
	t_list	*ptr;
	int		nbr;

	ptr = a;
	nbr = ptr->index;
	while (ptr)
	{
		if (ptr->index < nbr)
			nbr = ptr->index;
		ptr = ptr->next;
	}
	return (nbr);
}

void	small_sort(t_list **a)
{
	int	highest;
	int	lowest;

	if (sort_check(*a) == 1)
		return ;
	highest = ft_highest(*a);
	lowest = ft_lowest(*a);
	if ((*a)->index == highest)
	{
		if ((*a)->next->index == lowest)
			ra(a);
		else
			(ra(a), sa(a));
	}
	else if ((*a)->index == lowest)
		(rra(a), sa(a));
	else
	{
		if ((*a)->next->index == lowest)
			sa(a);
		else
			rra(a);
	}
}
