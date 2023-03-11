#include "push_swap.h"

void sort_three_args() {
   if (s_args.arr_size == 2) {
    if (asccii_to_int(s_args.stack_a[0]) > asccii_to_int(s_args.stack_a[1])) {
     swap_a();
    }
    return;
   }
    if (asccii_to_int(s_args.stack_a[1]) == find_min_nbr() && asccii_to_int(s_args.stack_a[s_args.arr_size - 1]) == find_the_max_nbr()) {
     swap_a();
    }
    if (asccii_to_int(s_args.stack_a[0]) == find_the_max_nbr() && asccii_to_int(s_args.stack_a[s_args.arr_size - 1]) == find_min_nbr()) {
     top_nbr_go_to_bottom_and_shift_up_by_one();
     swap_a();
    }
    if (asccii_to_int(s_args.stack_a[1]) == find_the_max_nbr() && asccii_to_int(s_args.stack_a[0]) == find_min_nbr()) {
     bottom_number_go_to_up_and_push_down_by_one();
     swap_a();
    }else if (asccii_to_int(s_args.stack_a[0]) == find_the_max_nbr() && asccii_to_int(s_args.stack_a[1]) == find_min_nbr()) {
     top_nbr_go_to_bottom_and_shift_up_by_one();
    }else if (asccii_to_int(s_args.stack_a[s_args.arr_size - 1]) == find_min_nbr() && asccii_to_int(s_args.stack_a[1]) == find_the_max_nbr()) {
     bottom_number_go_to_up_and_push_down_by_one();
    }
   return;
}

void sort_five_args() {
 s_args.size_b = s_args.arr_size;
 int size = s_args.arr_size;
 int count = 0;
 while (count < size / 2) {
  if (asccii_to_int(s_args.stack_a[0]) == find_min_nbr()) {
   send_top_of_a_to_top_of_b();
   s_args.arr_size -= 1;
  }else {
   top_nbr_go_to_bottom_and_shift_up_by_one();
   count--;
  }
  count++;
 }
 sort_three_args();
 send_top_of_b_to_top_of_a();
 send_top_of_b_to_top_of_a();
 s_args.arr_size += 2;
 return;
}

void sort_big_nbrs() {
 int count = 0;
 s_args.size_b = s_args.arr_size;
 int size = s_args.arr_size;
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
 count = 0;
 size = s_args.size_b;
 while (count < size) {
  send_top_of_b_to_top_of_a();
  s_args.arr_size++;
  count++;
 }
}

void    sort_args_using_only_actions()  {
    int count = 0;
    int size = s_args.arr_size;
    int max_nbr = find_the_max_nbr();
    int	min_nbr = find_min_nbr();
   if (s_args.arr_size >= 2 && s_args.arr_size  <= 3) {
     sort_three_args();
   }else if (s_args.arr_size <= 5 && s_args.arr_size >= 4) {
    sort_five_args();
   }else if (s_args.arr_size > 5) {
    sort_big_nbrs();
   }
    return ;
}