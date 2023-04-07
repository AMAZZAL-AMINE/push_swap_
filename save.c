// void	top_nbr_go_to_bottom_and_shift_up_by_one(void)
// {
// 	int		count;
// 	char	*top_elemn;

// 	//no leaks
// 	top_elemn = s_args.stack_a[0];
// 	count	= 0;
// 	while (count != (count_length_stack_a() - 1))
// 	{
// 		s_args.stack_a[count] = s_args.stack_a[count + 1];
// 		count++;
// 	}
// 	s_args.stack_a[count] = top_elemn;
// 	printf("ra\n");
// }

// rra
// void	bottom_number_go_to_up_and_push_down_by_one(void)
// {
// 	int		count;
// 	int		index;
// 	char	*last_elemn;
// 	char	*first_elemn;

// 	count = count_length_stack_a() - 1;
// 	index = 0;
// 	first_elemn = s_args.stack_a[0];
// 	last_elemn = s_args.stack_a[count_length_stack_a() - 1];
// 	while (count--)
// 	{
// 			s_args.stack_a[count] = s_args.stack_a[count - 1];
// 	}
// 	printf("last elemn: %s", s_args.stack_a[0]);
// 	s_args.stack_a[0] = last_elemn;
// 	printf("rra\n");
// }
