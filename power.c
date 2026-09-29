#include <stdio.h>
#include <math.h>
int main()
{
    int a, b;
    printf(" enter a : ");
    scanf("%d", &a);
    printf(" enter b : ");
    scanf("%d", &b);
    int power = pow(a, b); // a raised to power b
    printf(" %d", power);
     return 0;
}