/* Sarah Yoon
   Systems pd10
   Work0
   2016-09-16 */

#include <stdio.h>
#include <stdlib.h>

int main() {
  printf( "Answer to Problem 1: %d \n", multSum() );
  printf( "Answer to Problem 2: %d \n", evenFibSum() );
}

//Problem 1
int multSum() {
  int sum = 0;
  short mult3 = 1000/3;
  while (mult3) {
    sum += mult3;
    mult3 -= 3;
  }
  short mult5 = 1000/5;
  while (mult5) {
    sum += mult5;
    mult5 -= 5;
  }
  return sum;
}

//Problem 2
int evenFibSum() {
  int sum = 0;
  int n = 1;
  int curr = nthFib(n);
  while (curr < 4000000) {
    curr = nthFib(n);
    if (curr%2 == 0) sum += curr;
    n++;
  }
  return sum;
}

int nthFib(int n) {
  if (n==1 || n==2) return n;
  return nthFib(n-1) + nthFib(n-2);
}
