#include "../push_swap.h"

void check_if_already_sorted() {
 int count = 1;
 int index = count_length_stack_a() - 1;
 int check = 0;
 while (count < index) {
  if (asccii_to_int(s_args.stack_a[count]) > asccii_to_int(s_args.stack_a[count + 1])) {
    check++;
  }
  count++;
 }
 if (check == 0) {
  printf("Alredy Sorted");
  exit(1);
 }
}

