/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 17:47:41 by Dscheffn          #+#    #+#             */
/*   Updated: 2023/11/20 15:15:30 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*ft_lstnew(int nbr)
{
	t_list	*str;

	str = malloc(sizeof(t_list));
	if (str == NULL)
		return (NULL);
	str->prev = NULL;
	str->nbr = nbr;
	str->next = NULL;
	return (str);
}
