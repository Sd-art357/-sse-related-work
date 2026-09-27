#include <stdio.h>
int main(){
int n;
printf("enter number : ");
scanf("%d",&n);
int ld;
int sum =0 ;
while (n!=0){
  ld=  n%10;// we divide (or use modulo function) number by 10 in order to find its last digit
sum+=ld;
n=n/10;// ab wo last digit jo add ho chuka hai uskse htane ke liye n ko 10 se divide kra ja rha hai 
}
printf(" the sum of digits is %d",sum);
    return 0;
}