/* this is a program to calculate the factorial of a number */

#include <stdio.h>

int factorial(int k);

int main() {

  int number;
  printf("Enter a number: ");
  scanf("%d", &number);

  if (number > 0) {
    int results = factorial(number);
    printf("The factorial of %d is %d", number, results);
  }


  return 0;
}

int factorial(int k) {
  if (k == 0 || k == 1){
    return 1;
  }
  else {
    return k * factorial(k - 1);
  }
}
