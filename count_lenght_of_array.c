#include "push_swap.h"

int count_length_stack_a() {
 int count = 0;
 if (s_args.stack_a[0] == '\0') {
  printf("null a sat \n");
  return 0;
 }
 while (s_args.stack_a[count]) {
  count++;
 }
 return count;
}


int count_length_stack_b() {
 int count = 0;
 while (s_args.stack_b[count]) {
  count++;
 }
 return count;
}
