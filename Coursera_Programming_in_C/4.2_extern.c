//You should write a function called bump() that uses an extern variable so that the first time it is called, it returns int 0, the next time it returns 1 and so on.


extern int isCalled;
isCalled = -1;
int bump() {
  isCalled++;
  return isCalled;
}


#include <stdio.h>
int main() {
  int bump();
  printf("bump() returns %d\n", bump());
  printf("bump() returns %d\n", bump());
  printf("bump() returns %d\n", bump());
  printf("bump() returns %d\n", bump());
  printf("bump() returns %d\n", bump());
}