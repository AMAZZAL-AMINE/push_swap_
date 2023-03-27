#include "../push_swap.h"

int is_num(char c) {
 if (c >= '0' &&  c <= '9') {
  return 1;
 }
 return 0;
}

void check_valid_numbers() {
 int count = 0;
 int index = 0;
 while (s_args.stack_a[count]) {
  index = 0;
  while (s_args.stack_a[count][index]) {
    if (is_num(s_args.stack_a[count][index]) 
     || s_args.stack_a[count][index] == '-'
     || s_args.stack_a[count][index] == '+') {
       if (s_args.stack_a[count][index] == '-' || s_args.stack_a[count][index] == '+') {
         if(index != 0) {
           printf("Error\n");
           exit(1);
         }
         if (!is_num(s_args.stack_a[count][index + 1])) {
          printf("Error\n");
          exit(1);
         }
       }
       index++;
     }else {
      printf("Error\n");
      exit(1);
     } 
  }
  count++;
 }
}