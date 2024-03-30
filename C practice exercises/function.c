#include <stdio.h>

/* this is for a void function */

void calcsquare(int number) {
  int square = number * number;
  printf("The square of %d is %d", number, square);
}

int main() {

  calcsquare(5);

  return 0;
}
 
/* this is for a return function */

int calcsquare(int number) {
  int square = number * number;
  int toreturn = printf("The square of %d is %d", number, square);
  return toreturn;
}

int main() {

  int results = calcsquare(5);

  return 0;
}
