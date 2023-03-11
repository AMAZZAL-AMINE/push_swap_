#include "../push_swap.h"

//sb
void    swap_b() {
    char *temp;
    temp = s_args.stack_b[1];
    s_args.stack_b[1] = s_args.stack_b[0];
    s_args.stack_b[0] = temp;
    printf("sb\n");
}

//ra => rotate stack a;
void    top_nbr_go_to_bottom_and_shift_up_by_one_stack_b() {
    int count = 0;
    int size = s_args.arr_size - 1;
    char **dst = malloc(sizeof(char *) * 500);

    while (s_args.stack_b[count]) {
        if (count == 0) {
            dst[size] = s_args.stack_b[count];
            size--;
        }
        dst[size] = s_args.stack_b[size + 1];
        size--;
        count++;
    }
    s_args.stack_b = dst;
    printf("rb\n");
}

//rra
void    bottom_number_go_to_up_and_push_down_by_one_stack_b() {
    int count = 0;
    int size = s_args.arr_size - 1;
    char **dst = malloc(sizeof(char *) * 500);
    while (s_args.stack_b[count]) {
        if (size == (s_args.arr_size - 1) && count == 0) {
            dst[count] = s_args.stack_b[size];
            size--;
            count++;
        }
        dst[count] = s_args.stack_b[count - 1];
        size--;
        count++;
    }
    s_args.stack_b = dst;
}

//push top of a to top of b (pb)
void    send_top_of_b_to_top_of_a() {
   int count = 0;
   int size = s_args.arr_size;
   char **dst;
   dst  = malloc(sizeof(char) * 500);
   int index = 1;
   dst[0] = s_args.stack_b[0];
   while (s_args.stack_a[count]) {
    dst[index] = s_args.stack_a[count];
    count++;
    index++;
   }
   s_args.stack_a = dst;
   s_args.stack_b = s_args.stack_b + 1;
   printf("pa\n");
}