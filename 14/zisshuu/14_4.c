#include <stdio.h>
#include <string.h>
#include <errno.h>

int parse_string_by_conma(char str[], int numbers[]){
  char *num = strtok(str, ",");
  numbers[0] = atoi(num);
  int i = 1;
  while(1){
    num = strtok(NULL, ",");
    if(num == NULL)
      break;
    numbers[i] = atoi(num);
    i++;
  }
  return i;
}

int ascii_to_binary(FILE *ascii_file, FILE *binary){
  int sum = 0;
  while(1){
    char* str_ptr;
    char str[100];
    int numbers[100];
    str_ptr = fgets(str, 99, ascii_file);
    if(str_ptr == NULL)
      break;
    int size = parse_string_by_conma(str, numbers);
    fwrite(numbers, sizeof(int), size, binary);
    sum += size;
  }
  return sum;
}

int binary_to_ascii(FILE *binary, FILE *ascii, int size){
  int *numbers = (int*)malloc(sizeof(int) * size);
  fread(numbers, sizeof(int), size, binary);
  fprintf(ascii, "%d", numbers[0]);
  for(int i = 1; i < size; i++){
    printf("%d\n", numbers[i]);
    fprintf(ascii, ",%d", numbers[i]);
  }
}

int main(int argc, char *argv[]){
  FILE *ascii_file = fopen(argv[1], "r");
  FILE *binary_file = fopen(argv[2], "wb+");
  FILE *result_ascii = fopen("ascii_result", "w");

  int size = ascii_to_binary(ascii_file, binary_file);
  printf("size:%d\n", size);
  fseek(binary_file, 0L, SEEK_SET);
  binary_to_ascii(binary_file, result_ascii, size);
  int err = errno;
  printf("errorno:%d\n", err);

  fclose(ascii_file);
  fclose(binary_file);
  fclose(result_ascii);
}
