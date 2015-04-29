#include <stdio.h>
int year;
char input[100];
int main(){
    while(1){
    fgets(input,sizeof(input),stdin);
    sscanf(input,"%d",&year);
    if(year%100==0 && year%400!=0)
      printf("not うるう\n");
    else if(year%4==0)
      printf("うるう\n");
    else
      printf("not うるう\n"); 
  }
}
