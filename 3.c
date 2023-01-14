#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (size_t i = 1; i <= n; i++)
    {

        for (size_t s = 1; s <= n - i; s++)
        {
            printf("  ");
        }
        for (size_t k = i; k <= 2 * i - 1; k++)
        {
            printf("%d ", k);
        }
        for (size_t x = 2 * i - 2; x >= i; x--)
        {
            printf("%d ", x);
        }
        printf("\n");
    }
}