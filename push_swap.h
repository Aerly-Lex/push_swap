/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 11:40:08 by Dscheffn          #+#    #+#             */
/*   Updated: 2023/12/02 10:44:11 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h> // ENTFERNEN!!
# include <limits.h>

typedef struct s_list
{
	int				index;
	int				nbr;
	struct s_list	*next;
	struct s_list	*prev;
}	t_list;

//			main			//

int			push_swap(int argc, char **argv);

//			Stack Creator & Utils		//

t_list		*ft_lstnew(int nbr); // modified
void		ft_lstadd_back(t_list **lst, t_list *new);
size_t		ft_strlcpy(char *dst, const char *src, size_t size);
char		**ft_split(char const *s, char c);
t_list		**ft_super_split(int argc, char **argv);
int			ft_isdigit(int i);
long		ft_atoi(char *str); // modified
// void		ft_free_str(char **str); // ENTFERNEN???
void		insert_index(t_list *a_stack, int listsize);
int			ft_lstsize(t_list *lst);
t_list		*ft_lstlast(t_list *lst);
t_list		*stack_creator(int argc, char **argv);

//				Sorting				//

void		init_sort(t_list **a, t_list **b, int size);
void		small_sort(t_list **a);
void		medium_sort(t_list **a, t_list **b, int size);
void		big_sort(t_list **a, t_list **b, int size);
void		big_sort_back(t_list **a, t_list **b, int size);
int			ft_sqrt(int number); // modified
int			ft_count_rot(t_list *b, int size);
static int	ft_count_revrot(t_list *b, int size);

//			Error Handling		//

void		ft_duplicates(t_list *a);
void		liberator_stack(t_list **stack, int error);
void		ft_error(void);
int			sort_check(t_list *a);

//			Sorting methods			//

static void	swap(t_list **stack);
void		sa(t_list **a_stack);
void		sb(t_list **b_stack);
void		ss(t_list **a_stack, t_list **b_stack);

static void	push(t_list **dest, t_list **src);
void		pa(t_list **a_stack, t_list **b_stack);
void		pb(t_list **a_stack, t_list **b_stack);

static void	rotate(t_list **stack);
void		ra(t_list **a_stack);
void		rb(t_list **b_stack);
void		rr(t_list **a_stack, t_list **b_stack);

static void	reverse_rotate(t_list **stack);
void		rra(t_list **a_stack);
void		rrb(t_list **b_stack);
void		rrr(t_list **a_stack, t_list **b_stack);

#endif
