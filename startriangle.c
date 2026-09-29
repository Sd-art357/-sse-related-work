#include <stdio.h>
int main(){
int n;
printf(" enter n : ");
scanf("%d",&n);
for( int i=1;i<=n;i++){
    for( int j=1 ;j<=n+1-i;j++){
        printf("*");
    }
    printf("\n");//  by convention  bahar i liya kro and andar j iske peeche reason bhi hai
}
    return 0;
}//a+b=4   (ai+b=j)
//2a+b=3=>a+3-2a=4=> a=-1, b=5 this is specifically i have solved for 4  rows to be printed 