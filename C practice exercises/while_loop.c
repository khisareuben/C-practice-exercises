/* this program prints a multiplication table */

#include <stdio.h>

int main() {

  int number, times;
  int count = 1;
  printf("Enter a number: ");
  scanf("%d", &number);

  while(count <= 10) {
    times = count * number;
    printf("%d * %d = %d\n", count, number, times);
    count += 1;
  }

  return 0;
}
