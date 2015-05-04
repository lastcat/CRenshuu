#include <stdio.h>
void write_boundary_apart(){
  printf("+-----");
}

void write_boundary(){
  int i;
  for(i = 0;i < 8; i++){
    write_boundary_apart();
  }
  printf("+\n");
}

void write_vartical_apart(){
  printf("|     ");
}

void write_vartical(){
  int i = 0;
  for(i = 0; i < 8; i++){
    write_vartical_apart();
  }
  printf("|\n");
}

int main(){
  int i;
  int j;
  for(i = 0;i < 7; i++){
    write_boundary();
    for(j = 0; j < 3; j++)
      write_vartical();
  }
  write_boundary();
}
