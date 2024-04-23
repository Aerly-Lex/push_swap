/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   medium_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 10:47:32 by Dscheffn          #+#    #+#             */
/*   Updated: 2023/12/02 15:07:43 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// Looks for Lowest number and pushes to B till 3 Elements in A is left
// Init Small_sort on A
// Pushes everything back to A
void	medium_sort(t_list **a, t_list **b, int size)
{
	int	i;
	int	count_rot;
	int	count_revrot;

	i = 0;
	while (i++ < size - 3)
	{
		count_rot = ft_count_rot(*b, size);
		count_revrot = size - count_rot;
		if (count_rot <= count_revrot)
		{
			while ((*a)->index != i)
				ra(a);
			pb(a, b);
		}
		else
		{
			while ((*a)->index != i)
				rra(a);
			pb(a, b);
		}
	}
	small_sort(a);
	while (*b)
		pa(a, b);
}
