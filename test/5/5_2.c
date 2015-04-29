#include <stdio.h>
char line[100];
int height;
int width;
float area;
int main(){
  printf("Enter width height?");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%d %d", &width, &height);
  area = width * height / 2.0;
  printf("The area is %f\n", area);
  return(0);
}
