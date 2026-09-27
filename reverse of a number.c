#include <stdio.h>
int main()
{
    int n;
    printf(" enter number :");
    scanf("%d", &n);
    int ld;
    while (n != 0)
    {
        ld = n % 10;

        n = n / 10;
        printf("%d", ld);
    }

    return 0;
}