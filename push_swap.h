#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

    #include <unistd.h>
    #include <stdlib.h>
    #include <stdio.h>
    #include <limits.h>
    struct args_info {
        int size_b;
        char **stack_a;
        char **stack_b;
        int arr_size;
    } s_args;

    char **get_all_args(char **args);

    //swaper sorting
    void    sort_args_using_only_actions();
    /* libft functions */
    void	*ft_calloc(size_t count, size_t size);

    //jandlage
    void check_duplaicate_nbrs();
    /* actions stack a */
   void swap_a();
   void top_nbr_go_to_bottom_and_shift_up_by_one();
   void bottom_number_go_to_up_and_push_down_by_one();
   void send_top_of_a_to_top_of_b();

    /* actions stack b */
   void swap_b();
   void send_top_of_b_to_top_of_a();
   void top_nbr_go_to_bottom_and_shift_up_by_one_stack_b();
   void bottom_number_go_to_up_and_push_down_by_one_stack_b();

    //both: all in one (actions)
    void run_sa_and_sb_at_same_time();
    void run_ra_and_rb_at_ame_time();
    void run_rra_and_rrb_at_same_time();

    //find ma nbr nd min nbr function
    int find_min_nbr();
    int find_the_max_nbr();

    int asccii_to_int(char *str);

#endif