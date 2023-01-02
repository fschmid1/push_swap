/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschmid <fschmid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 09:17:52 by fschmid           #+#    #+#             */
/*   Updated: 2023/01/02 12:34:56 by fschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <unistd.h>
# include "../printf/src/ft_printf.h"
# include <stdarg.h>

typedef struct s_stack
{
	int				content;
	int				index;
	struct s_stack	*next;
}	t_stack;

void	ft_print_stacks(t_stack **a, t_stack **b);

t_stack	*ft_stacknew(int content);

void	ft_stackadd_back(t_stack **lst, t_stack *new);

t_stack	*ft_stacklast(t_stack *lst);

t_stack	**ft_parse_arguments(int argc, char **args);

void	ft_swap_a(t_stack **stack);

void	ft_swap_b(t_stack **stack);

void	ft_swap_swap(t_stack **a, t_stack **b);

void	ft_stackadd_front(t_stack **lst, t_stack *new);

void	ft_push_a(t_stack **a, t_stack **b);

void	ft_push_b(t_stack **b, t_stack **a);

t_stack	*ft_stackget_last(t_stack **lst);

void	ft_rotate_a(t_stack **stack);

void	ft_rotate_b(t_stack **stack);

void	ft_rotate_rotate(t_stack **a, t_stack **b);

void	ft_reverse_rotate_a(t_stack **stack);

void	ft_reverse_rotate_b(t_stack **stack);

void	ft_reverse_rotate_rotate(t_stack **a, t_stack **b);

void	ft_free_stack(t_stack **stack);

int		ft_stack_has(t_stack **stack, int num);

size_t	ft_stack_size(t_stack **stack);

t_stack	*ft_stackget_n(t_stack **stack, int n);

void	ft_set_index(t_stack **stack);

void	ft_exit(t_stack **stack);

void	free_string_array(char **tmp);

int		is_num(char *tmp);
#endif