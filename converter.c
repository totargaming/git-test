#include <stdio.h>

float usd, vnd, exrate;
int choice;
int main(void) {
  float* ptrVND = &vnd;
  float* ptrUSD = &usd;
  do {
    printf("Give me the rate from 1 unit to Vnd: ");
    scanf("%f", &exrate);
  } while (exrate < 1);
  do {
    printf("choose the converter: \n(1) usd to VND\n(2) VND to usd");
    scanf("%d", &choice);

  } while (choice != 1 && choice != 2);
  if (choice == 1) {
    do {
      printf("\nEnter amount of money in usd currency:");
      scanf("%f", &usd);
    } while (usd < 0);

    printf("Amount of Money is %.3f\n", *ptrUSD * exrate);
  } else if (choice == 2) {
    do {
      printf("\nEnter Amount Of Money In Viet Nam Dong:\t");
      scanf("%f", &vnd);
    } while (vnd < 0);
    printf("Amount of Money Is %.3f\n", *ptrVND / exrate);
  }

  return 0;
}