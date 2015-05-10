int sum_of_array(int array[], int size){
  int sum = 0;
  for(int i = 0; i < size; i++)
    sum += array[i];
  return sum;
}

int fast_sum_of_array(int array[], int size){
  register int sum = 0;
  for(int *ptr = &array[0]; ptr < &array[size]; ptr++)
    sum += *ptr;
  return sum;
}
