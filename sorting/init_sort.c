/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 13:26:33 by Dscheffn          #+#    #+#             */
/*   Updated: 2023/12/02 15:02:16 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// Depending on number of Arguments it will start:
// 2 arg = just swap
// 3 arg = small_sort
// 8 or less arg = medium_sort
// else big_sort & big_sort_back
void	init_sort(t_list **a, t_list **b, int size)
{
	if (size == 2)
		sa(a);
	else if (size == 3)
		small_sort(a);
	else if (size <= 8)
		medium_sort(a, b, size);
	else
	{
		big_sort(a, b, size);
		big_sort_back(a, b, size);
	}
}
