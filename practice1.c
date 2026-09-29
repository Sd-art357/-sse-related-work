#include <stdio.h>
int main(){
int n;
printf(" enter n : ");
scanf("%d",&n);
int m ;
printf(" enter m : ");
scanf("%d",&m);

//nested loops is being used here 
for(int i = 1; i<=n;i++){// outer loop is used to print no of lines , inner loops is for printing n number of stars in one line 
    for( int i =1 ; i<=m;i++){
        printf("*");
    }
    printf("\n");// hr line ke baad ek enter maarne ke liye 
}

    return 0;
}// no of rows = no of lines 
// no of stars in one line = no of column 