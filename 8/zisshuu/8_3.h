double average(int array[], int size){
  double sum = 0.0;
  int i;
  for(i = 0; i < size; i++){
    sum += array[i];
  }
  return sum / size;
}
