int count_set_bit(int num){
  int i;
  int count = 0;
  for(i = 0; i < 32; i++){
    if((num & ( 1 << i)) != 0){
      count++;
    }
  }
  return count;
}
