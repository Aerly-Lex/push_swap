/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 11:41:37 by Dscheffn          #+#    #+#             */
/*   Updated: 2023/12/02 15:12:40 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;
	int		size;

	a = NULL;
	b = NULL;
	if (argc == 1)
		exit(1);
	a = stack_creator(argc, argv);
	if (sort_check(a) == 1)
		return (write(1, "It's already sorted\n", 20), 1);
	size = ft_lstsize(a);
	insert_index(a, size);
	init_sort(&a, &b, size);
	liberator_stack(&a, 0);
	return (0);
}
