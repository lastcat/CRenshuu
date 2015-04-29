#include <stdio.h>
#include <math.h>
float x1;
float yi1;
float x2;
float yi2;
char input[100];
int main(){

  printf("input 2 points(format is \"x1,y1,x2,y2)\":");
  fgets(input,sizeof(input),stdin);
  sscanf(input,"%f,%f,%f,%f",&x1,&yi1,&x2,&yi2);
  printf("differ between 2 points is %f\n",sqrt( (x2-x1)*(x2-x1) + (yi2-yi1)*(yi2-yi1) ));
}
