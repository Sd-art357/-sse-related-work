#include <stdio.h>

int main() {
    int x;

    printf("Enter number: ");
    scanf("%d", &x);

   if(x<0){ 
    printf("%d", (-1)*x);
   }
   printf(" the absolute value of n is  : %d" ,x);
    return 0;
}