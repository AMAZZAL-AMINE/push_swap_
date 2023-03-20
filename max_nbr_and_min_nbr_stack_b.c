#include "push_swap.h"

int find_the_max_nbr_stack_b() {
    int count = 0;
    int max_nbr = asccii_to_int(s_args.stack_b[0]);

    while (s_args.stack_b[count]) {
     if (asccii_to_int(s_args.stack_b[count]) > max_nbr) {
      max_nbr = asccii_to_int(s_args.stack_b[count]);
     }
     count++;
    }
    return (max_nbr);
}

int find_min_nbr_stack_b() {
    int count = 0;
    int min_nbr = asccii_to_int(s_args.stack_b[0]);
    while (s_args.stack_b[count]) {
     if (asccii_to_int(s_args.stack_b[count]) < min_nbr) {
      min_nbr = asccii_to_int(s_args.stack_b[count]);
     }
     count++;
    }
    return (min_nbr);
}