#include <stdio.h>

#define FIRST_PART 7
#define LAST_PART 5
#define ALL_PARTS FIRST_PART + LAST_PART
//展開後、*と+の優先順序の違いにより、FIRST + (LAST * FIRST) + LASTとなってしまっている。
#define T_ALL_PARTS (FIRST_PART + LAST_PART)

int  main(){
  printf("The square of all parts is %d\n", ALL_PARTS * ALL_PARTS);
  printf("The square of all parts is %d\n", T_ALL_PARTS * T_ALL_PARTS);
  return 0;
}
