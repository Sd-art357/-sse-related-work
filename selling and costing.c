#include <stdio.h>
int main(){
 int sp;
 int cp;
 printf(" enter sp :");
 scanf("%d",&sp);

 printf(" enter cp :");
 scanf("%d",&cp);
 if ( sp > cp ){
    printf(" profit ");
 }
 if (cp>sp) {
    printf(" loss");
 }
 else  { 
    printf(" no loss no profit");
 }

    return 0;
}