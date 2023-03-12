#include "push_swap.h"

void    sort_args_using_only_actions()  {
    int count = 0;
    int size = s_args.arr_size;
    int max_nbr = find_the_max_nbr();
    int	min_nbr = find_min_nbr();
   if (s_args.arr_size >= 2 && s_args.arr_size  <= 3) {
     sort_three_args();
   }else if (s_args.arr_size <= 5 && s_args.arr_size >= 4) {
    sort_five_args();
   }else if (s_args.arr_size > 5) {
    sort_big_nbrs();
   }
    return ;
}