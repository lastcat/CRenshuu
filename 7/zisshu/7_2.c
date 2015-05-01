#include <stdio.h>
char input[100];
int beforeY,beforeM,beforeD;
int afterY,afterM,afterD;
const int DaysOfMonth[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int betweenDay(int aM,int aD,int bM,int bD){
  int betweenDays = 0;
  //年またぎ or not
  if(aM >= bM && aD >= bD){
    if(aM > bM){
      betweenDays += (DaysOfMonth[bM] - bD) + 1;
      printf("月末までで%d日\n",betweenDays);
      int j;
      for(j = bM + 1; j <= aM - 1 ; j++ ){
        printf("%d月丸々で+%d日\n",j,DaysOfMonth[j]);
        betweenDays += DaysOfMonth[j];
      }
       printf("月初からafterDayまでで+%d\n",aD);
       return (betweenDays += aD);
    }
    else{
      printf("同じ月なので+%d日",aD - bD);
      return aD - bD;
    }
  }
  else {
    return betweenDay(12,31,bM,bD) + betweenDay(aM,aD,1,1);
  }
}

int calcBetweenYear(int aY,int aM,int aD,int bY,int bM,int bD){
  if(aY - bY < 1)
    return 0;
  else if (aM >= bM && aD >= bD){
        return aY - bY;
  }
  return 0;
}

int main(){
  //入力　before -> afterのvalidationだるいので省略。
  printf("before:");
  fgets(input, sizeof(input), stdin);
  sscanf(input, "%d %d %d",&beforeY, &beforeM, &beforeD );
  printf("after:");
  fgets(input, sizeof(input), stdin);
  sscanf(input, "%d %d %d",&afterY, &afterM, &afterD );

  printf("丸%d年と%d日\n",
    calcBetweenYear(afterY,afterM,afterD,beforeY,beforeM,beforeD),
     betweenDay(afterM,afterD,beforeM,beforeD));

}
