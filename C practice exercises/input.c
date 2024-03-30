/* this program calculates the age of someone */

#include <stdio.h>

int main() {

  int year, age;
  printf("Enter your birth_year: ");
  scanf("%d", &year);

  age = 2024 - year;
  printf("You are %d years old", age);


  return 0;
}
