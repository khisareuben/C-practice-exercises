/* this  program calculates the sum of even numbers upto 100*/
#include <stdio.h>

int main() {

  int i, sum = 0;
  
  for (i = 2; i <= 100; i = i + 2) {
    sum += i;
  }
  printf("%d", sum);


  return 0;
}
