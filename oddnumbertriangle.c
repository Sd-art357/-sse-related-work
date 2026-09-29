#include <stdio.h>
int main(){
int n;
printf("enter n :"  );
scanf("%d",&n);
for ( int i =1 ; i<=n ;i++){// for rows
    int a= 1;// new variable introduced with help of this we can print odd numbers 

    for( int j =1; j<=i; j++){
        printf("%d ", a);
        a = a+2;
    }
    printf("\n");
}


    return 0;
}