#include <stdio.h>
int main()
{
    int line[] = {10, 20, 30, 40, 50};
    line[2] = *(line);
    printf("%d", line[2]);
    return 0;
}