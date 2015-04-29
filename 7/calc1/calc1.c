#include <stdio.h>
char line[100];
int result;
char operator;
int value;

int main(){
  result = 0;

  while(1){
    printf("結果:%d\n",result);

    printf("数値と演算子を入力してください:\n");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%c %d", &operator, &value);
    if(operator == 'q' || operator == 'Q')
      break;
    if(operator == '+'){
      result += value;
    }
    else if(operator == '-'){
      result -= value;
    }
    else if(operator == '*'){
      result *= value;
    }
    else if(operator == '/'){
      if(value == 0){
        printf("0除算は禁止されています\n");
        printf("この操作は適用されません\n");
      }
      else
        result /= value;
    }
    else{
      printf("不正な演算子です:%c\n",operator);
    }
  }
}
