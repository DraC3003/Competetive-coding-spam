#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2 * (n - i - 1); j++)
        {
            printf(" ");
        }
        for (int j = i + 1; j <= 2 * i + 1; j++)
        {
            printf("%d ", j);
        }
        for (int j = 2 * i; j >= i + 1; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}