#include <stdio.h>
int main()
{
    int x;
    printf(" enter year : ");
    scanf(" %d", &x);
    if ( x%4 ==0 && x%100 != 0){ 
        printf("  leap year");
    }
    else (" not a leap year ");
    return 0;
}