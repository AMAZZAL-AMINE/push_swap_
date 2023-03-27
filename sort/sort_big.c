#include "../push_swap.h"

void sort_big() {
 int size = count_length_stack_a() - 1;
 int count = 0;

 int range_min = 0;
 int range_max = 39;
 int end = count_length_stack_a() - 1;
 char **sorted_arr = bubble_sort();

 if (range_max > end) {
  range_max = end;
 }
 while (count_length_stack_a() - 1) {
  if (sorted_arr[range_max] && 
   asccii_to_int(s_args.stack_a[0]) >= asccii_to_int(sorted_arr[range_min]) && 
   asccii_to_int(s_args.stack_a[0]) <= asccii_to_int(sorted_arr[range_max])) {
    send_top_of_a_to_top_of_b();
    size--;
    if (range_max < end) {
     range_max++;
     range_min++;
    }
  }

  if (asccii_to_int(s_args.stack_a[0]) < asccii_to_int(sorted_arr[range_min])) {
   send_top_of_a_to_top_of_b();
   top_nbr_go_to_bottom_and_shift_up_by_one_stack_b();
   size--;
    if (range_max < end) {
     range_max++;
     range_min++;
    }
  }
  if (sorted_arr[range_max] &&
    asccii_to_int(s_args.stack_a[0]) > asccii_to_int(sorted_arr[range_max])) {
    top_nbr_go_to_bottom_and_shift_up_by_one();
  }
 }
 if (s_args.stack_a[0]) {
   send_top_of_a_to_top_of_b();
 }

 /**
  * 
  * sorting from stack b
 */
 count = 0;
 int pos_max = 0;
 int index = 0;
 while (count_length_stack_b()) {
  //first fined the position of the bigest number
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