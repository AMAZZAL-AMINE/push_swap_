#include "../push_swap.h"


void sort_one_hundred_nbrs() {
 int size = count_length_stack_a() - 1;
 int count = 0;
 s_args.count_actions = 0; 

 int rone = 0;
 int rtwo = 15;
 while (s_args.stack_a[count]) {
  if (asccii_to_int(s_args.stack_a[0]) >= rone && asccii_to_int(s_args.stack_a[0]) <= rtwo) {
   send_top_of_a_to_top_of_b();
   rone++;
   rtwo++;
   count = 0;
  }
  if (asccii_to_int(s_args.stack_a[0]) < rone) {
   send_top_of_a_to_top_of_b();
   top_nbr_go_to_bottom_and_shift_up_by_one_stack_b();
   rone++;
   rtwo++;
  }
  if (asccii_to_int(s_args.stack_a[0]) > rtwo) {
   top_nbr_go_to_bottom_and_shift_up_by_one();
  }
  count++;
 }

 //find where is the max nbr
 count = 0;
 int pos_max = 0;
 int index = 0;
 while (count_length_stack_b()) {
  //fisr fine the position of the bigest number
  index = 0;
  while (s_args.stack_b[index]) {
   if (asccii_to_int(s_args.stack_b[index]) == find_the_max_nbr_stack_b()) {
    pos_max = index;
    break;
   }
   index++;
  }

  size = count_length_stack_b() / 2;
  if (pos_max > size) {
   index = count_length_stack_b() - 1;
   while (index >= pos_max) {
     bottom_number_go_to_up_and_push_down_by_one_stack_b();
     index--;
   }
  }else {
    index = 0;
    while (index < pos_max) {
     top_nbr_go_to_bottom_and_shift_up_by_one_stack_b();
     index++;
    }
  }
  send_top_of_b_to_top_of_a();
 }
}