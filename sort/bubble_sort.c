#include "../push_swap.h"

char **bubble_sort() {
    int count = 0;
    int index = 0;
    char *tmp = NULL;

    char **arr = s_args.fake_args;
    while (arr[count]) {
        index = 0;
        while (arr[index + 1]) {
            if (ft_atoi(arr[index]) > ft_atoi(arr[index + 1])) {
                tmp = arr[index];
                arr[index] = arr[index + 1];
                arr[index + 1] = tmp;
            }
            index++;
        }
        count++;
    }
    return arr;
}