/* this program checks if the one is allowed to vote or not according to age */

#include <stdio.h>

int main() {

  int age;
  printf("What is your age: ");
  scanf("%d", &age);

  if (age >= 18)
    printf("You are eligible to vote");
  else:
    printf("You are not eligible to vote");


  return 0;
}
