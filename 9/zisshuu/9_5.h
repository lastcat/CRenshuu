int max(int a,int b){
  if(a > b)
    return a;
  return b;
}
int max_of_array(int array[], int size){
  //printf("array size:%d\n", size);
  int i;
  int max_num = array[0];
  for(i = 1; i < size - 1; i++){
    //printf("max_num:%d, array[i]:%d\n",max_num, array[i]);
    max_num = max(max_num, array[i]);
  }
  return max_num;
}
