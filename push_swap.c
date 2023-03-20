#include   "push_swap.h"


int main(int argc, char *argv[])
{
   
    s_args.stack_a =  get_all_args(argv + 1);
    s_args.stack_b  = malloc(count_length_stack_a() * sizeof(char));

    check_duplaicate_nbrs();
    sort_args_using_only_actions();
    int count = 0;
    // printf("_____________ STACK A _________________\n");
    // while (s_args.stack_a[count]) {
    //   printf("%s\n", s_args.stack_a[count]);
    //   count++;
    // }
    // printf("\n_____________ STACK B _________________B\n");
    // count = 0;
    // while (s_args.stack_b[count]) {
    //     printf("%s\n", s_args.stack_b[count]);
    //     count++;
    // }
    return 0;
}