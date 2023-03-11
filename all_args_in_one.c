#include "push_swap.h"

int asccii_to_int(char *str)
{
    int count = 0;
    int ismis = 1;
    int result = 0;

    while (str[count] >= '0' && str[count] <= '9')
    {
        result = (result * 10) + (str[count] - 48);
        count++;
    }
    return result;
}

char *get_tal_space(char *str) {
 int count = 0;
 char *dst;
 while (str[count] != ' ' && str[count] != '\0') {
  count++;
 }
 dst = malloc((count + 1) * sizeof(char));
 count = 0;
 while (str[count] != ' ' && str[count] != '\0') {
  dst[count] = str[count];
  count++;
 }
 dst[count] = 0;
 return dst;
}

char **get_all_args(char **args) {
    int count = 0;
    char **arr = malloc(sizeof(char *) * 500);
    int i = 0;
    int j = 0;
    while (args[count])
    {
        while (args[count][i]) {
            if (args[count][i] == ' ') {
                i++;
            }
            if ((args[count][i] != ' ' && (args[count][i - 1] == ' ' 
                ||  args[count][i - 1] == '\0'))) {
                arr[j] = get_tal_space(args[count] + i);
                j++;
            }
            i++;
        }
        i = 0;
        count++;
    }
    s_args.arr_size = j;
    return arr;
}
