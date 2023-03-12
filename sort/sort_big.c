#include "../push_swap.h"

void sort_big_nbrs() {
 int count = 0;
 s_args.size_b = count_length_stack_b();
 int size = count_length_stack_a();
 while (count < (size / 2)) {
  if (asccii_to_int(s_args.stack_a[0]) == find_min_nbr()) {
   send_top_of_a_to_top_of_b();
   s_args.arr_size -= 1;
  }else if (asccii_to_int(s_args.stack_a[0]) != find_min_nbr()){
    top_nbr_go_to_bottom_and_shift_up_by_one();
    count--;
  }
   count++;
 }
}