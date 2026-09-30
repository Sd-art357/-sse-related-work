#include <stdio.h>
int number(int n){
    if (n==0){ 
   
    return ;
}
    printf("%d\n",n);
    return number (n-1);
}
int main()
{
    int n;
    printf(" enter n : ");
    scanf("%d",&n);
    int call= number(n);
    return 0;
}