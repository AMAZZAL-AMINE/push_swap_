#include "../push_swap.h"

void sort_big_nbrs() {
 int count = 0;
 s_args.size_b = count_length_stack_b();
 int size = count_length_stack_a();
 s_args.count_actions = 0; 
 int index = 0;
 //first check for first whers the min nbr;
 while (s_args.stack_a[count]) {
  index= 0;
  while (index < size / 2) {
   if (asccii_to_int(s_args.stack_a[0]) == find_min_nbr()) {
    send_top_of_a_to_top_of_b();
    s_args.count_actions++;
   }else {
    bottom_number_go_to_up_and_push_down_by_one();
    s_args.count_actions++;
   }
   index++;
  }
  count++;
 }
}