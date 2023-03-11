#include "push_swap.h"

void check_duplaicate_nbrs() {
    int count = 0;
    int size = s_args.arr_size;
    int index= 0;
    while (s_args.stack_a[count]) {
        index = 0;
        while (index < size) {
            if (asccii_to_int(s_args.stack_a[count]) == asccii_to_int(s_args.stack_a[index]) && count != index) {
                printf("Error: Duplicate numbers\n");
                exit(1);
            }
            index++;
        }
        count++;
    }
}