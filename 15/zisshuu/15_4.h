int count_bits(char ch){
  int i;
  int count = 0;
  for(i = 0; i < 8; i++){
    if((ch & (1 << i)) != 0)
      count++;
  }
  return count;
}

int fast_count_bits(char ch){
  register int i;
  register int count = 0;
  for(i = 0; i < 8; i++){
    if((ch & (1 << i)) != 0)
      count++;
  }
  return count;
}

int count_bits_char_array(char array[], int size){
  int sum = 0;
  for(int i = 0; i < size; i++){
    sum += count_bits(array[i]);
  }
  return sum;
}

int fast_count_bits_char_array(char array[], int size){
  register int sum = 0;
  for(int i = 0; i < size; i++){
    sum += fast_count_bits(array[i]);
  }
  return sum;
}
