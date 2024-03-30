/* 
 this is a guessing program that allows the user to make a guess upto 3 times
*/

#include <stdio.h>

int main() {

  int secret_number = 7;
  int guess_limit = 3;
  int guess_count = 0;
  int guess;

  while (guess_count < guess_limit) {
    printf("Guess: ");
    scanf("%d", &guess);
    guess_count += 1;

    if (guess == secret_number){
      printf("You won!");
      break;
    }
    else {
      printf("Wrong guess!\n");
      continue;
    }

  }
  printf("You loose!");
  
  return 0;
}
