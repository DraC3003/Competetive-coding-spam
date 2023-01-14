#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int max = -10000;
    int min = 10000;
    for (size_t i = 0; i < n; i++)
    {
        int a;
        scanf("%d", &a);
        if (a < min)
        {
            min = a;
        }
        if (a > max)
        {
            max = a;
        }
        int x = pow(a, 3);
        int y = pow(a, 2);
        if (a > 0)
        {
            printf("%d", x);
        }
        else if (a <= 0)
        {
            printf("%d", y);
        }
        printf("\n");
    }
    printf("The Max is:%d and the min is:%d", max, min);
    return 0;
}