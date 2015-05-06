//10_1
#define IS_DEVIDABLE_TEN(num) (num % 10 == 0)

//10_2 10_3:保留 問題の定義と解決法が曖昧

//10_4 アドレス渡されると仮定
#define swaps(x,y) \
  *x = *x + *y;\
  *y = *x - *y;\
  *x = *x - *y
