#include <stdio.h>
 int main(){
   int i,j;
   for(i=0; i< 9; i++){
     for(j=0;j < 9; j++){
       printf("%d * %d = %d\n", (i+1), (j+1), (i+1)*(j+1) );
     }
   }
 }
