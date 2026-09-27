#include <stdio.h>
int main(){
int n;
printf(" enter number :");
scanf("%d",&n);
int sum =0;
int ld;// while loop tb use kra kro jb jyada kuch conditions nhi pta ho apko ques ki 
while (n!=0){
    ld =n%10;
    if ( ld%2==0){
        sum=sum+ld;
        n=n/10;
        printf(" sum of even digits in a number is %d",sum);
    }

}

    return 0;
}