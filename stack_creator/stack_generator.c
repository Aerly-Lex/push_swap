/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_generator.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 15:17:30 by Dscheffn          #+#    #+#             */
/*   Updated: 2023/12/02 10:00:48 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// If Argc < 2	| Exits
// If Argc = 2	| Call split
// Else			| Call Atoi
// Afterwards it Checks for all Error Cases
t_list	*stack_creator(int argc, char **argv)
{
	int		i;
	long	nbr;
	t_list	*a;

	i = 1;
	a = NULL;
	if (argc < 2 || argv[1][0] == '\0')
		ft_error();
	else if (argc == 2)
	{
		argv = ft_split(argv[1], 32);
		i = 0;
	}
	while (argv[i])
	{
		nbr = ft_atoi(argv[i]);
		if (nbr > INT_MAX || nbr < INT_MIN)
			liberator_stack(&a, 1);
		ft_lstadd_back(&a, ft_lstnew(nbr));
		i++;
	}
	ft_duplicates(a);
	return (a);
}
