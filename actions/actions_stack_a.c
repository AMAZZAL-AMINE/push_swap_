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
 char **dst = malloc(sizeof(char *) * (count_length_stack_a() + 2));
 dst[count_length_stack_a() - 1] = s_args.stack_a[0];
 s_args.stack_a += 1;
 while (count != (count_length_stack_a()))
 {
  dst[count] = s_args.stack_a[count];
		count++;
 }
 s_args.stack_a = dst;
	printf("ra\n");
}

// rra
void bottom_number_go_to_up_and_push_down_by_one()
{
 int count = 1;
 int size = s_args.arr_size - 1;
 char **dst = malloc(sizeof(char *) * (count_length_stack_a() + 2));
 dst[0] = s_args.stack_a[count_length_stack_a() - 1];
 int index = 0;
 while (count != count_length_stack_a())
 {
  dst[count] = s_args.stack_a[index];
  index++; 
  count++;
 }
 s_args.stack_a = dst;
	printf("rra\n");
}

// push top of a to top of b (pb)
void send_top_of_a_to_top_of_b()
{
 int count = 0;
 int size = count_length_stack_b();
 char **dst = malloc(sizeof(char *) * (count_length_stack_b() + 2));
 int index = 1;
 dst[0] = s_args.stack_a[0];
 while (count < size && s_args.stack_b[count]) {
  dst[index++] = s_args.stack_b[count++];
 }
 s_args.stack_b = dst;
 s_args.stack_a += 1;
	printf("pb\n");
}