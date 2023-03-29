#include   "push_swap.h"


int main(int argc, char *argv[])
{
  if (argc == 1) {
    printf("Error\n");
    exit(1);
  }
    s_args.stack_a =  get_all_args(argv + 1);
    s_args.stack_b  = malloc(count_length_stack_a() * sizeof(char));
    s_args.fake_args = get_all_args(argv + 1);
    check_valid_numbers();
    check_duplaicate_nbrs();
    check_if_already_sorted();
    sort_args_using_only_actions();
    
    return 0;
}