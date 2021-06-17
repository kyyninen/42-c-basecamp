#include <stdlib.h>

int        *ft_range(int min, int max)
{
    int n;
    int *range;

    if (min >= max)
        return (0);
    if (!(range = (int*)malloc(sizeof(int) * (max - min))))
        return (0);
    n = 0;
    while (min < max)
    {
        range[n] = min;
        n++;
        min++;
    }
    return (range);
}