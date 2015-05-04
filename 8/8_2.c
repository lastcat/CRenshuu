#include <stdio.h>
char line[100];
int seven_count;
int data[5];
int three_count;
//"index"はどこかで使われてるっぽい
int indecs;

int main(){
  seven_count = 0;
  three_count = 0;
  printf("Enter 5 numbers\n");
  fgets(line, sizeof(line), stdin);
  sscanf(line,"%d %d %d %d %d",
  &data[0],&data[1],&data[2],&data[3],&data[4]);
//0 origin problem
  for(indecs = 1; indecs <= 5; ++indecs){
//正しくはfor(indecs = 0; indecs < 5; ++indecs){
    if(data[indecs] == 3)
      ++three_count;
    if(data[indecs] == 7)
      ++seven_count;
  }
  printf("Three %d Seven %d\n",three_count, seven_count);
  return (0);
}
