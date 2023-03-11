#include "../push_swap.h"

// sa
void swap_a()
{
 char *temp;
 temp = s_args.stack_a[1];
 s_args.stack_a[1] = s_args.stack_a[0];
 s_args.stack_a[0] = temp;
	printf("sa\n");
}

// ra => rotate stack a;
void top_nbr_go_to_bottom_and_shift_up_by_one()
{
 int count = 0;
 int size = s_args.arr_size - 1;
 char **dst = malloc(sizeof(char) * 500);

 while (s_args.stack_a[count])
 {
		if (count == 0)
		{
			dst[size] = s_args.stack_a[count];
			size--;
		}
		dst[size] = s_args.stack_a[size + 1];
		size--;
		count++;
 }
 s_args.stack_a = dst;
	printf("ra\n");
}

// rra
void bottom_number_go_to_up_and_push_down_by_one()
{
 int count = 0;
 int size = s_args.arr_size - 1;
 char **dst = malloc(sizeof(char *) * 500);
 while (s_args.stack_a[count])
 {
		if (size == (s_args.arr_size - 1) && count == 0)
		{
			dst[count] = s_args.stack_a[size];
			size--;
			count++;
		}
		dst[count] = s_args.stack_a[count - 1];
		size--;
		count++;
 }
 s_args.stack_a = dst;
	printf("rra\n");
}

// push top of a to top of b (pb)
void send_top_of_a_to_top_of_b()
{
 int count = 0;
 int index = 1;
 int size = s_args.arr_size;
 char **dst;
 dst = malloc(sizeof(char *) * 500);
 dst[0] = s_args.stack_a[0];
 while (s_args.stack_b[count]) {
  dst[index] = s_args.stack_b[count];
  index++;
		count++;
 }
 s_args.stack_b = dst;
 s_args.stack_a = s_args.stack_a + 1;
	printf("pb\n");
}