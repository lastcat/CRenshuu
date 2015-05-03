bool isPrime(int num){
  int i;
  for(i = 2; i < num; i++ ){
    if(num % i == 0)
      return false;
  }
  return true;
}
//暇なら適当なアルゴリズム実装してもいいかもしれない。
