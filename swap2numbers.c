#include <stdio.h>

int main()
{
    int a;
    printf(" enter a : ");
    scanf("%d",&a);
     int b;
    printf(" enter b : ");
    scanf("%d",&b);
    int temp; //temp here means temporary its just  convention to call it temp
    temp=a;
    a=b;
    b=temp;
    printf(" %d%d",a,b);
    return 0;
}
