#include "../push_swap.h"

void sort_one_hundred_nbrs() {
 s_args.size_b = count_length_stack_b();
 int size = count_length_stack_a() / 2;
 int count = 0;
 s_args.count_actions = 0; 
 while (count < size) {
  if (asccii_to_int(s_args.stack_a[size]) == find_min_nbr()) {
   send_top_of_a_to_top_of_b();
  }else {
   bottom_number_go_to_up_and_push_down_by_one();
   count -= 1;
  }
  count++;
 }
}

