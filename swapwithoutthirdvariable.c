#include <stdio.h> // swap without using third variable .....

int main()
{
    int a;
    printf(" enter a : ");
    scanf("%d",&a);
    int b;
    printf(" enter b : ");
    scanf("%d",&b);
    a=a+b; //learn these three lines .....
    b=a-b;
    a=a-b;
    printf("%d%d",a,b);



    return 0;
}