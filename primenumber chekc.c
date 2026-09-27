#include <stdio.h>
int main()
{
    int n;
    printf(" enter n :");
    scanf("%d", &n);
    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            printf(" the given number is composite");
            break;
        }
    }

    return 0;
}