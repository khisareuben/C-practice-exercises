#include <stdio.h>

int main() {

  char name[20];
  printf("Enter your name: ");
  fgets(name, sizeof(name), stdin);

  printf("%s", name);


  return 0;
}
