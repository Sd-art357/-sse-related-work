#include <stdio.h>
// pointers are used to store address..

int main()
{int a =5;
    int* x=&a;   // int* is basically used for pointer which in turn is used to store address
    printf("%p\n",x);
    printf("%p\n",&x);
    printf("%d",*x);
    return 0;
}