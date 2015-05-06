int count(int number, int array[],int length){
  if(length < 1)
    return 0;
  if(array[length - 1] == number){
    return (1 + count(number, array, length - 1));
  }
  else
    return count(number, array, length - 1);
}
