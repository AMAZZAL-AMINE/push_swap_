#include "../push_swap.h"

//sb
void    swap_b() {
    char *temp;
    temp = s_args.stack_b[1];
    s_args.stack_b[1] = s_args.stack_b[0];
    s_args.stack_b[0] = temp;
    printf("sb\n");
}

//ra => rotate stack a;
void top_nbr_go_to_bottom_and_shift_up_by_one_stack_b()
{
 int count = 0;
 char **dst = malloc(sizeof(char *) * (count_length_stack_b() + 2));
 dst[count_length_stack_b() - 1] = s_args.stack_b[0];
 s_args.stack_b = s_args.stack_b + 1;
 while (count < (count_length_stack_b()))
 {
  dst[count] = s_args.stack_b[count];
		count++;
 }
 s_args.stack_b = dst;
	printf("rb\n");
}
//rrb
void bottom_number_go_to_up_and_push_down_by_one_stack_b()
{
 int count = 1;
 char **dst = malloc(sizeof(char *) * (count_length_stack_b() + 2));
 dst[0] = s_args.stack_b[count_length_stack_b() - 1];
 int index = 0;
 while (count != count_length_stack_b())
 {
  dst[count] = s_args.stack_b[index];
  index++;
  count++;
 }

 s_args.stack_b = dst;
	printf("rrb\n");
}

void send_top_of_b_to_top_of_a()
{
 int count = 0;
 int size = count_length_stack_a() + 1;
 char **dst = malloc(sizeof(char *) * (count_length_stack_a() + 2));
 int index = 1;
 dst[0] = s_args.stack_b[0];
 while (count < size) {
  dst[index++] = s_args.stack_a[count++];
 }
 s_args.stack_a = dst;
 s_args.stack_b = s_args.stack_b + 1;
	printf("pa\n");
}