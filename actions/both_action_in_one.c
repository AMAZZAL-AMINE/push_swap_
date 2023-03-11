#include "../push_swap.h"

void run_sa_and_sb_at_same_time() {
    swap_a();
    swap_b();
}

void run_ra_and_rb_at_ame_time() {
    top_nbr_go_to_bottom_and_shift_up_by_one();
    top_nbr_go_to_bottom_and_shift_up_by_one_stack_b();
}

void run_rra_and_rrb_at_same_time() {
    bottom_number_go_to_up_and_push_down_by_one();
    bottom_number_go_to_up_and_push_down_by_one_stack_b();
}
