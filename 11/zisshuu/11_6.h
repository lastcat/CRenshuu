int count_bits(int num){
  int i;
  int count = 0;
  for(i = 0; i < 32; i++){
    if((num & (1 << i)) != 0)
      count++;
  }
  return count;
}

int set_bits_left(int count){
  int sum = 0;
  int i;
  int j;
  for(i = 0; i < count; i++){
    sum |= (1 << (31 - i));
  }
  return sum;
}

int shift_all_bit_to_left(int num){
  return set_bits_left(count_bits(num));
}
