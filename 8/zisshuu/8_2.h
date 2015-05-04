#include <stdio.h>
int gcd(int m, int n){
  if (m < n) return gcd(n, m);
  int temp;
  if(m % n == 0)
    return n;
  else
    return gcd(n, m % n);
}

int lcm(int a, int b){
  return (a * b) / gcd(a, b);
}

int* add_fraction(int nume1, int deno1, int nume2, int deno2, int result[2]){
  int deno = lcm(deno1, deno2);
  //printf("%d, %d\n",nume1 , (deno / deno2));
  result[0] =  (nume1 * (deno / deno1) + nume2 * (deno / deno2));
  result[1] = deno;
  return result;
}

double calculate_resistance(int* numerators, int* denomitors, int size){
  int sum_numerator = 0;
  int sum_denomitor = 1;
  int result[2];
  int i;
  for(i = 0; i < size; i++){
    //printf("%d/%d + %d/%d is\n", sum_numerator, sum_denomitor, numerators[i], denomitors[i]);
    sum_numerator = add_fraction(sum_numerator, sum_denomitor, numerators[i], denomitors[i], result)[0];
    sum_denomitor = add_fraction(sum_numerator, sum_denomitor, numerators[i], denomitors[i], result)[1];
    //printf("nume: %d, deno:%d\n", sum_numerator, sum_denomitor);
  }
  return double(sum_denomitor) / sum_numerator;
}
