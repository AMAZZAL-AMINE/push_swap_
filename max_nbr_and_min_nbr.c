#include "push_swap.h"

int find_the_max_nbr() {
    int count = 0;
    int size = s_args.arr_size;
    int max_nbr = asccii_to_int(s_args.stack_a[0]);

    while (s_args.stack_a[count]) {
     if (asccii_to_int(s_args.stack_a[count]) > max_nbr) {
      max_nbr = asccii_to_int(s_args.stack_a[count]);
     }
     count++;
    }
    return (max_nbr);
}

int find_min_nbr() {
    int count = 0;
    int min_nbr = asccii_to_int(s_args.stack_a[0]);
    int size = s_args.arr_size;
    while (s_args.stack_a[count]) {
     if (asccii_to_int(s_args.stack_a[count]) < min_nbr) {
      min_nbr = asccii_to_int(s_args.stack_a[count]);
     }
     count++;
    }
    return (min_nbr);
}