/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschmid <fschmid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:01:35 by fschmid           #+#    #+#             */
/*   Updated: 2022/11/10 15:33:05 by fschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// int argc, char **argv
int	main()
{
	int *c = malloc(sizeof(int));
	*c = 1;
	t_list *a = ft_lstnew(c);
	t_list *b = ft_lstnew(NULL);

	ft_stack_add(&a, 2);
	ft_stack_add(&a, 3);
	ft_stack_add(&a, 4);
	ft_print_stacks(a, b);
	return (0);
}
