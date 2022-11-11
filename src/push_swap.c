/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschmid <fschmid@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:01:35 by fschmid           #+#    #+#             */
/*   Updated: 2022/11/11 15:49:52 by fschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack **a = ft_parse_arguments(argc, argv);
	if (a == NULL)
	{
		ft_printf("Error\n");
		return (0);
	}
	t_stack **b = malloc(sizeof(t_stack *));

	ft_print_stacks(a, b);

	ft_printf("swapped a\n");
	ft_swap(a);
	ft_print_stacks(a, b);

	ft_printf("push b\n");
	ft_push(b, a);
	ft_print_stacks(a, b);

	ft_printf("push a\n");
	ft_push(a, b);
	ft_print_stacks(a, b);

	ft_printf("rotate a\n");
	ft_rotate(a);
	ft_print_stacks(a, b);

	ft_printf("reverse rotate a\n");
	ft_reverse_rotate(a);
	ft_print_stacks(a, b);
	
	return (0);
}
