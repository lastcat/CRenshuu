#include <math.h>

int cast_bits_to_int(int array[]){
  int sum = 0;
  int i;
  for(i = 0; i < 4; i++){
    if(array[i] == 1)
      sum += pow(2, i);
  }
  return sum;
}

//arrayはsize8のint配列であり、各要素は4bitに分割された値
void devide_eight_four_bit(int num, int array[]){
  int i;
  int j;
  for(i = 0; i < 8; i++){
    int bits[4] = {};
    for(j = 0; j < 4; j++){
      //4bitずつに区切って、(ブロック数*4+bit番目)左シフトしたやつと&取る
      if((num & (1 << (i * 4 + j))) != 0){
        printf("%dブロック %dbit目 bit set\n", i, j);
        bits[j] = 1;
      }
    }
    array[i] = cast_bits_to_int(bits);
  }
}
