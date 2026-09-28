#include <stdio.h>
int main(){
int n;
printf("enter n : ");
scanf("%d",&n);// 1 1 2  3 5 8 (sum of previous two number, first two terms are always 1 )
int a =1;
int b=1 ;
 int sum=0;
for( int i =1;i<= n-2;i++){
    sum =a+b;
    a=b;
    b=sum;
}
printf(" the %dth fibonacci is %d",n,sum);
    return 0;
}