/* this program calculates the downpayment one is required to pay */

#include <stdio.h>
#include <stdbool.h>

int main() {

  int price = 1000000;
  int downpayment;
  bool has_good_credit = true;

  if (has_good_credit) {
    downpayment = price * 0.1;
  }
  else{
    downpayment = price * 0.2;
  }

  printf("Downpayment = %d", downpayment);

  return 0;
}
