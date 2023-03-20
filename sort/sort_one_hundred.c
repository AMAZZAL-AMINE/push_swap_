#include "../push_swap.h"


void sort_one_hundred_nbrs() {
 int size = count_length_stack_a() - 1;
 int count = 0;
 s_args.count_actions = 0; 

 //cehunk 1 == 0 => 19
 count = 0;
 while (s_args.stack_a[count]) {
  if (asccii_to_int(s_args.stack_a[count_length_stack_a() - 1]) < 30) {
   bottom_number_go_to_up_and_push_down_by_one();
  }
  if (asccii_to_int(s_args.stack_a[0]) < 30) {
    send_top_of_a_to_top_of_b();
    count = 0;
  }else {
   top_nbr_go_to_bottom_and_shift_up_by_one();
  }
  count++;
 }

 //cehunk 2 == 20 => 39
 count = 0;
  while (s_args.stack_a[count]) {
  if (asccii_to_int(s_args.stack_a[count_length_stack_a() - 1]) < 60) {
   bottom_number_go_to_up_and_push_down_by_one();
  }
  if (asccii_to_int(s_args.stack_a[0]) < 60) {
    send_top_of_a_to_top_of_b();
    count = 0;
  }else {
   top_nbr_go_to_bottom_and_shift_up_by_one();
  }
  count++;
 }

  //cehunk 3 == 40 => 59
 count = 0;
  while (s_args.stack_a[count]) {
  if (asccii_to_int(s_args.stack_a[count_length_stack_a() - 1]) < 90) {
   bottom_number_go_to_up_and_push_down_by_one();
  }
  if (asccii_to_int(s_args.stack_a[0]) < 60) {
    send_top_of_a_to_top_of_b();
    count = 0;
  }else {
   top_nbr_go_to_bottom_and_shift_up_by_one();
  }
  count++;
 }

   //cehunk 3 == 60 => 79
 count = 0;
  while (s_args.stack_a[count]) {
  if (asccii_to_int(s_args.stack_a[count_length_stack_a() - 1]) < 80) {
   bottom_number_go_to_up_and_push_down_by_one();
  }
  if (asccii_to_int(s_args.stack_a[0]) < 80) {
    send_top_of_a_to_top_of_b();
    count = 0;
  }else {
   top_nbr_go_to_bottom_and_shift_up_by_one();
  }
  count++;
 }

  count = 0;
  while (s_args.stack_a[count]) {
  if (asccii_to_int(s_args.stack_a[count_length_stack_a() - 1]) >= 80) {
   bottom_number_go_to_up_and_push_down_by_one();
  }
  if (asccii_to_int(s_args.stack_a[0]) >= 80) {
    send_top_of_a_to_top_of_b();
    count = 0;
  }else {
   top_nbr_go_to_bottom_and_shift_up_by_one();
  }
  count++;
 }

 count = 0;
 while (count_length_stack_b())  {
  if (asccii_to_int(s_args.stack_b[count_length_stack_b() - 1]) == find_the_max_nbr_stack_b()) {
   bottom_number_go_to_up_and_push_down_by_one_stack_b();
   send_top_of_b_to_top_of_a();
  }
  if (asccii_to_int(s_args.stack_b[0]) == find_the_max_nbr_stack_b()) {
    send_top_of_b_to_top_of_a();
  }else{
   top_nbr_go_to_bottom_and_shift_up_by_one_stack_b();
  }
 }
 
}