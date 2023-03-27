

#include "push_swap.h"


int main(int argc, char **argv)
{
	t_node *stack_a;
	t_node *stack_b;

	init_stack(&stack_a, argv, argc);
	if (DEBUG)
	{
		ft_printf("stack A size :%d\n",ft_stack_size(stack_a));
		ft_print_stack(stack_a);
	}	


	if (!ft_checksorted(stack_a))
	{
		//sıralı değil
		//ft_printf("sıralı değil\n");
		ft_sort(&stack_a);


	}

	
}
