/* this program calculates the average marks of 5 subjects */


#include <stdio.h>

int main() {

  int marks[5];
  int i, sum;

  for (i = 0; i < 5; i++){
    printf("Enter you marks: ");
    scanf("%d", &marks[i]);
  }

  for (i = 0; i < 5; i++){
    sum += marks[i];
  }

  int results = sum / 5;
  printf("Avarage = %d percent", results);

  return 0;
}
