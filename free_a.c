#include "push_swap.h"

void free_a(char **freyage) {
    int count = 0;
    while (freyage[count]) {
        free(freyage[count]);
        count++;
    }
    free(freyage);
}