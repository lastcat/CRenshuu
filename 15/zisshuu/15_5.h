#include <stdio.h>
int my_memcpy(int buf1[], int buf2[], size_t n){
  for(int i = 0; i < n; i++){
    buf1[i] = buf2[i];
  }
  return 0;
}

int fast_my_memcpy(int buf1[], int buf2[], size_t n){
  register int *ptr2 = &buf2[0];
  register int *ptr1 = &buf1[0];
  while(ptr2 < &buf2[n]){
    *ptr1 = *ptr2;
    ptr2++;
    ptr1++;
  }
  return 0;
}

int initialize(int array[], int size, int num){
  for(int i = 0; i < size; i++){
    //printf("%d\n", i);
    array[i] = num;
  }
  return 0;
}
